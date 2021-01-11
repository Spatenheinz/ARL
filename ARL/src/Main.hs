module Main where

import System.Environment
import System.IO
import Data.List
import qualified Data.List.NonEmpty as NE
import Text.Megaparsec.Error

import Arl.Parser


argP = do args <- getArgs
          cleaned <- return $ partition (\x -> head x == '-') args
          return $ cleaned

use = "usage: ARL [opts] filename"

run file =
  do inp <- readFile file
     case parseFile file inp of
       Left e -> print $ parseErrorPretty $ NE.head $ bundleErrors e--errorBundlePretty e
       Right prog -> print prog

main :: IO()
main = do args <- argP
          case args of
            (_,[]) -> putStrLn use
            (_,[x]) -> run x

            
