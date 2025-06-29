def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s):
        if char_count[char] == 1:
            return index
    return -1

#1.answer-->Looping over char_count  breaks the original string order.
#2.answer-->Dictionaries don’t guarantee the original string order so the non-repeating character found might be wrong
