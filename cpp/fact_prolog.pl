% Base case: factorial of 0 is 1
factorial(0, 1).

% Recursive rule for factorial calculation
factorial(N, Result) :-
    N > 0,
    N1 is N - 1,
    factorial(N1, SubFactorial),
    Result is N * SubFactorial.
%Write factorial(5,ANS).
