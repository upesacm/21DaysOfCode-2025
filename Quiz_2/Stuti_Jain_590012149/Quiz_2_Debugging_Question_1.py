def is_digits_only(s):
    if len(s) == 0:
        return True # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True


#the bug is in the if statemnt as it will return true if the length is zero, hence, "" is returning true
#A. Empty string should return False since it contains no digits
#corrected code:

def is_digits_only(s):
    if len(s) == 0:
        return False # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
