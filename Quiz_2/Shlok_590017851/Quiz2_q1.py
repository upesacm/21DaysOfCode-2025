def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
print(is_digits_only("123456"))  
print(is_digits_only("12a456")) 
print(is_digits_only(""))        
print(is_digits_only("007"))     
