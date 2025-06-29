def is_digits_only(s):
    # Return False for empty string as it contains no digits
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False 
    return True
# corect option is: A) Empty string should return False since it contains no digits


