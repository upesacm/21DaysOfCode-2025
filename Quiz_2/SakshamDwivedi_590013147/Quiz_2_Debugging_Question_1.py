def is_digits_only(s):
    if len(s) == 0:
        return False # Here was a bug (it was true, hence empty string would've returned True)
    if s[0] == '-':   #This handles negative numbers, as if a number is negative -
        s = s[1:]   #The negative sign is stripped
    for char in range(len(s)):
        if ord(s[char]) < 48 or ord(s[char]) > 57: #Now it uses indices instead of characters, also it uses ASCII values for comparision now
            return False
    return True

print(is_digits_only("123"))
print(is_digits_only("-123"))
