-- Fibonacci function
fibonacci :: Integer -> Integer
fibonacci 0 = 0
fibonacci 1 = 1
fibonacci n = fibonacci (n - 1) + fibonacci (n - 2)

-- Sum of Fibonacci numbers up to a given limit
sumFibonacci :: Integer -> Integer
sumFibonacci limit = sum [fibonacci n | n <- [0..limit]]

-- Main function
main :: IO ()
main = do
    putStrLn "Enter the limit for Fibonacci series:"
    input <- getLine
    let limit = read input :: Integer
    let result = sumFibonacci limit
    putStrLn ("Sum of Fibonacci numbers up to " ++ show limit ++ " is " ++ show result)

