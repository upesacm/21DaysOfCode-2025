def first_non_repeating(s):
    from collections import OrderedDict

    char_count = OrderedDict()
    # Step 1: Count frequencies in order
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    # Step 2: Find the first character with count == 1
    for char in char_count:
        if char_count[char] == 1:
            return s.index(char)
    return -1
