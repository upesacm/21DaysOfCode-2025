def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for char in s:
        if char_count[char] == 1:
            return s.index(char)  

    return -1
# The bug is here: iterating over char_count doesn't guarantee original string order
    # So if a character appears early in the string but is added to char_count later, it may be skipped
    # Fix: iterate over the original string again to preserve order
