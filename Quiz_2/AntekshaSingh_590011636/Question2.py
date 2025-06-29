def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx 
    return -1
