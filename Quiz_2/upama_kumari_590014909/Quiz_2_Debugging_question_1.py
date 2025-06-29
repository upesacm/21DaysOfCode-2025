def is_digits_only(s):
    if len(s) == 0:
        return False  
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

#This is the logical error. If the function is meant to check whether a string contains only digits, an empty string should return False because it has no digits to validate.
