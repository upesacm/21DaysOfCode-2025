def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Check in original order
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx
    return -1
  
