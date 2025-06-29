def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Preserve order from original string
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1

    # Bug: Used for char in char_count which may not match original string order
    # Why It Fails: It could return the wrong index if a character appears more than once.
    # Fix: Loop through original string using range(len(s)) to ensure correct index is returned.

