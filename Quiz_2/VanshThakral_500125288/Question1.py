def is_digits_only(s):
    if len(s) == 0:
        return False  # Fix: empty string is not a digits-only string
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
