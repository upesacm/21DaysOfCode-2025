''' def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count:  # Error: Iterating over dict does not guarantee order of appearance in `s`
        if char_count[char] == 1:
            return s.index(char)  # Inefficient: Calling index again for known char
    return -1 '''


def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Check in original string order
    for char in s:  # ✅ Fixed: Preserves original order of characters
        if char_count[char] == 1:
            return s.index(char)
    return -1
