module Main where

import System.Environment
import System.IO
import Data.List
import qualified Data.List.NonEmpty as NE
import Data.Map as M hiding (null, map)
import Text.Megaparsec.Error


import Arl.Parser
import Arl.Ast
import Arl.Eval
import Arl.RilState
import Arl.RilEnv
import Arl.Options


-- main :: IO ()
-- main = do
--   options <- parseArgs
--   putStrLn $ show options
    -- ------------------------PREPROCESSING -----------------------
multiMain :: Prog -> Either String Prog'
multiMain (mains, funcs) = if length mains > 1 then
                             Left "multiple main functions declared"
                          else
                            Right (head mains, funcs)


-- argP = do partition (\x -> head x == '-') <$> getArgs

-- use = "usage: ARL [opts] filename"

run :: Options -> IO ()
run args =
  do inp <- readFile (file args)
     case parseFile (file args) inp of
       Left e -> print $ errorBundlePretty e --parseErrorPretty $ NE.head $ bundleErrors e--errorBundlePretty e
       Right prog -> case runEval baseEnv emptyState . evalProg args <$> multiMain prog of
                       Left e -> print e
                       Right (str,state) -> do writeFile (argOut args) $ str


-- -- run file =
-- --   do inp <- readFile file
-- --      case parseFile file inp of
-- --        Left e -> print $ errorBundlePretty e --parseErrorPretty $ NE.head $ bundleErrors e--errorBundlePretty e
-- --        Right prog -> print prog

main :: IO()
main = do args <- parseArgs
          run args
