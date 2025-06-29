# Answer = option A) Empty string should return False since it contains no digits

def is_digits_only(s):
    if len(s) == 0:
        return false
    for char in s:
        if char < '0' or char > '9':
            return False
    return True