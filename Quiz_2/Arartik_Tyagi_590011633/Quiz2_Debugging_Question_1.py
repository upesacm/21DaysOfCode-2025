''' def is_digits_only(s):
    if len(s) == 0:
        return True  #  Error: An empty string contains no digits, so this should return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True '''


def is_digits_only(s):
    if len(s) == 0:
        return False  # Fixed: Now correctly returns False for empty input
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# Corrected answer is A