def is_digits_only(s):
    if len(s) == 0:
        return False    #should return false since it contains no string
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
# corect option is: A) Empty string should return False since it contains no digits