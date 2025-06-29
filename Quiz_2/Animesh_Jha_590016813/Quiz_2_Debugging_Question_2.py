def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s):
        if char_count[char] == 1:
            return index
    return -1

#answer_1-->The algorithm iterates over char_count instead of the original string s.
#answer_2-->Dictionaries don’t guarantee the original string’s order, so the "first" non-repeating character found might be wrong.
