'''1. The following function to check if a string contains only digits has a bug. Identify the issue:

def is_digits_only(s):
    if len(s) == 0:
        return True # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

For input "", this returns True, but for input "123", it works correctly. What's the logical error?

A) Empty string should return False since it contains no digits

B) The loop condition should use indices instead of characters

C) The character comparison should use ASCII values

D) The function should handle negative numbers'''

# solution = Option A is correct here Empty string should return False since it contains no digits since in the given program when len(s) == 0 its return True but its return False

# here the correct version of code:

def is_digits_only(s):
    if len(s) == 0:
        return False # Line 1 # first correction
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
