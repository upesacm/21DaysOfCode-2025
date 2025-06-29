# A) Empty string should return False since it contains no digits
# function should return False for empty strings while maintaining the original digit-checking logic for non-empty strings.
def is_digits_only(s):
    if len(s) == 0:
        return False  # Empty string contains no digits
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
