module Main where

import System.Environment
import System.IO
import Data.List
import qualified Data.List.NonEmpty as NE
import Data.Map as M hiding (partition)
import Text.Megaparsec.Error

import Arl.Parser
import Arl.Eval
import Arl.RilState


argP = do partition (\x -> head x == '-') <$> getArgs

use = "usage: ARL [opts] filename"

run file =
  do inp <- readFile file
     case parseFile file inp of
       Left e -> print $ errorBundlePretty e --parseErrorPretty $ NE.head $ bundleErrors e--errorBundlePretty e
       Right prog -> case runEval M.empty emptyState . evalProg <$> multiMain prog of
                       Left e -> print e
                       Right (str,state) -> do putStrLn str


-- run file =
--   do inp <- readFile file
--      case parseFile file inp of
--        Left e -> print $ errorBundlePretty e --parseErrorPretty $ NE.head $ bundleErrors e--errorBundlePretty e
--        Right prog -> print prog

main :: IO()
main = do args <- argP
          case args of
            (_,[]) -> putStrLn use
            (_,[x]) -> run x

            
