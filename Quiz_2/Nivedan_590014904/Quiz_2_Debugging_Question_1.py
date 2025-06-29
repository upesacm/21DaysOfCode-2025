'''
def is_digits_only(s):
    if len(s) == 0:
        return True # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
'''
"""
Solution:-
(A)Empty string should return False since it contains no digits. as " " contains no digits but still returns true.
Fixed COde below after removing the bug:
"""
def is_digits_only(s):
    if len(s) == 0:
        return False # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
