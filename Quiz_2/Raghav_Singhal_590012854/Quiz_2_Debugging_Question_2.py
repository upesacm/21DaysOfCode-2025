def first_non_repeating(s):
    char_count = {}
    # Step 1: Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Step 2: Check first non-repeating in original order
    for i, char in enumerate(s):#we need index with dictonary so we use another variable
        if char_count[char] == 1:
            return i
    return -1