 1. Correct answer for the given problem should be:-
Empty string should return False since it contains no digits.
Problem with the given code is:-
the function returns True for an empty string (""), which is not correct because an empty string does not contain any digits.

Here is the fixed code for the same question:-
   def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

The only mistake with the given code, was returning True when the string was empty. That’s wrong because an empty string means there’s nothing to check, so it can't be considered as "only digits".
I fixed it by simply returning False when the string length is zero.


