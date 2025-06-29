# The following function to check if a string contains only digits has a bug. Identify the issue:

def is_digits_only(s):
    if len(s) == 0:
        return False
    if s[0] == '-' and len(s) > 1:
        for c in s[1:]:
            if not (ord('0') <= ord(c) <= ord('9')):
                return False
        return True
    for c in s:
        if not (ord('0') <= ord(c) <= ord('9')):
            return False
    return True

print(is_digits_only("-123"))

# For input "", this returns True, but for input "123", it works correctly. What's the logical error?
# ANS -> Line 1 was returning true when the length was 0 which is incorrect as it not numeric, therfore changed it to False and now it is working properly

# A) Empty string should return False since it contains no digits
#Ans -> changed the return statement to False in Line 1

# B) The loop condition should use indices instead of characters

# C) The character comparison should use ASCII values

# D) The function should handle negative numbers
