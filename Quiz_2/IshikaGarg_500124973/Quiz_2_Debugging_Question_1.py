Question 1: Bug in `is_digits_only` function

Issue:
Currently, the function returns True when the input string is empty. But logically, an empty string does not contain any digits, so it should return False. The condition at Line 1 is the bug.

Correct Answer:
A) Empty string should return False since it contains no digits

Fixed Code:
def is_digits_only(s):
    if len(s) == 0:
        return False  # An empty string doesn't contain digits
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
