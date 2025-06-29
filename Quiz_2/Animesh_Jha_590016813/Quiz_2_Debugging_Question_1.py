def is_digits_only(s):
    if len(s) == 0:
        return False  
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

#A-->The function currently returns True for an empty string,
#which is incorrect if we want to check if the string contains only digits. An empty string does not contain any digits, so it should return False.

