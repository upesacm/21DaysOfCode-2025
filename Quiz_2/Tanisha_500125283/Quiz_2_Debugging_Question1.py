def is_digits_only(s):
    if len(s) == 0:
        return False # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
print(is_digits_only(""))  
print(is_digits_only("123")) 
# error is:Empty string should return False since it contains no digits
