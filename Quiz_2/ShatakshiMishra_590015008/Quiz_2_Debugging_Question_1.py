def is_digits_only(s):
    if len(s) == 0:
        return False  # Empty string is not considered to have digits
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
