% Base cases for Fibonacci sequence
fibonacci(0, 0).
fibonacci(1, 1).

% Recursive rule for Fibonacci sequence
fibonacci(N, Result) :-
    N > 1,
    N1 is N - 1,
    N2 is N - 2,
    fibonacci(N1, F1),
    fibonacci(N2, F2),
    Result is F1 + F2.
%Write fibonacci(10,ANS).
