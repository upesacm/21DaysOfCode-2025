# Divyansh Kumar Singh 590012175

def is_digits_only(s):
    # Return False for empty string since it contains no digits
    if not s:
        return False

    for char in s:
        if char < '0' or char > '9':
            return False

    return True

# Explanation:
# A) Empty string should return False since it contains no digits
