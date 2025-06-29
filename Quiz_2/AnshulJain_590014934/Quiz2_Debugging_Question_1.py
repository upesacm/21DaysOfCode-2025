def is_digits_only(s):
    if len(s) == 0:
        return False  # ✅ Fix: Empty string should return False since it contains no digits
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# Test cases
print(is_digits_only("123"))    #  Output: True
print(is_digits_only(""))       #  Output: False (Corrected behavior)
print(is_digits_only("12a3"))   #  Output: False
print(is_digits_only("007"))    #  Output: True

# Answer: A) Empty string should return False since it contains no digits
