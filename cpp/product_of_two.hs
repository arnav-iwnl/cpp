-- Function to calculate the product of two numbers
product :: Integer -> Integer -> Integer
product x y = x * y

-- Main function
main :: IO ()
main = do
    putStrLn "Enter the first number:"
    input1 <- getLine
    putStrLn "Enter the second number:"
    input2 <- getLine
    let num1 = read input1 :: Integer
    let num2 = read input2 :: Integer
    let result = product num1 num2
    putStrLn ("Product of " ++ show num1 ++ " and " ++ show num2 ++ " is " ++ show result)
