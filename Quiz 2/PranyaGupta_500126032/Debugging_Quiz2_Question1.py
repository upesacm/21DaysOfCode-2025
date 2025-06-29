def is_digits_only(s):
    #if len(s) == 0:
    #    return True # returning True for 0 len string is incorrect as an empty string contains no Digits
    #rest everything is fine
    #Corrected 
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
