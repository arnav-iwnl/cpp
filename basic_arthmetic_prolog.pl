% Addition
add(X, Y, Sum) :-
    Sum is X + Y.

% Subtraction
subtract(X, Y, Difference) :-
    Difference is X - Y.

% Multiplication
multiply(X, Y, Product) :-
    Product is X * Y.

% Division
divide(X, Y, Quotient) :-
    Y =\= 0,
    Quotient is X / Y.

% add(10,5,ANS). subtract(10,5,ANS). multiply(10,5,ANS).
% divide(10,5,ANS).
