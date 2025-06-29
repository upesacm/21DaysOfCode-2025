# --------------------------------------------
# Question 1: Bug in is_digits_only function
# --------------------------------------------

# Original Code:
def is_digits_only_original(s):
    if len(s) == 0:
        return True  # Line 1
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# Answer: A) Empty string should return False since it contains no digits

# Explanation:
# The function should not return True for an empty string, because a string that contains "only digits" 
# must have at least one digit. Returning True for an empty string is logically incorrect.

# Corrected Code:
def is_digits_only(s):
    if len(s) == 0:
        return False  # Fix: Empty string should not be considered as digits-only
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
