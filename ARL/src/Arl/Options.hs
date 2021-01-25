module Arl.Options where


import System.Console.GetOpt
import System.Environment
import System.IO
import Text.Read
import Data.List
import Control.Monad


data Options = Options {
    heapSize :: Int
  , argInp :: [Int]
  , file   :: String
  , argOut :: String
  } deriving Show

defaultOptions = Options {
    heapSize = 15
  , argInp = [1 .. 10]
  , file = ""
  , argOut = ""
  }

options :: [OptDescr (Options -> Either String Options)]
options =
  [ Option ['n'] ["heap-size"]
      (ReqArg (\n opts ->
        case reads n of
          [(size, "")] | size >= 1 && size <= 20 -> Right opts { heapSize = size }
          _ -> Left "--Heap must be between 1 and 20"
        ) "N")
      "the size of the heap 2^N-1"
  , Option ['i'] ["input"]
      (ReqArg (\i opts ->
        case readEither i :: Either String [Int] of
          Right is -> Right opts { argInp = is }
          Left _ -> Left "--input must be an [Int]"
        ) "INPUT")
      "the list to provide to RIL"
  , Option ['c'] ["compile"]
      (OptArg (\c opts ->
        case readEither (show c) :: Either String String of
          Right os -> Right opts { argOut = os }
          Left _ -> Left "--output must be string"
        ) "FILENAME")
      "The ARL file to compile"
  , Option ['o'] ["output"]
      (ReqArg (\o opts ->
        case readEither (show o) :: Either String String of
          Right os -> Right opts { argOut = os }
          Left _ -> Left "--output must be string"
        ) "FILENAME")
      "The filename for the ril file"
  ]

rilName :: String -> String
rilName name = let a = takeWhile (/= '.') name in
               a ++ ".ril"
parseArgs :: IO Options
parseArgs = do
  argv <- getArgs
  progName <- getProgName
  let header = "Usage: " ++ progName ++ " [OPTION...]"
  let helpMessage = usageInfo header options
  case getOpt Permute options argv of
    (opts, inputfile, []) ->
      case foldM (flip id) defaultOptions opts of
        Right opts -> do opts' <- case (inputfile, file opts) of
                                    ([], []) -> ioError $ userError "File to compile must be specified"
                                    ([], opt) -> return opts
                                    (inp,_) -> return $ opts {file = head inp}
                         opts'' <- case argOut opts' of
                                     [] -> return $ opts' {argOut = rilName (file opts')}
                                     _  -> return $ opts'
                         return opts''
        Left errorMessage -> ioError (userError (errorMessage ++ "\n" ++ helpMessage))
    (_, _, errs) -> ioError (userError (concat errs ++ helpMessage))
