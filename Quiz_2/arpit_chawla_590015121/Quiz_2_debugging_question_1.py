def is_digits_only(s):
    if len(s) == 0:
        return False  # An empty string should not be considered digits-only
    for char in s:
        if char < '0' or char > '9':
            return False
    return True


#explanation :

#For an empty string "", the function returns True because of Line 1.

#But logically, an empty string does not contain any digits, so the function should return False.

Correct answer: A) Empty string should return False since it contains no digits
