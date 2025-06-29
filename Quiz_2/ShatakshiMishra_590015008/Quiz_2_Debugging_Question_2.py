#Task 1
s.index(char) gives the first occurrence of that character in the string, not necessarily the first non-repeating one in correct order.

#Task 2
s.index(char) gives the first occurrence of that character in the string, not necessarily the first non-repeating one in correct order.

#Task #
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for char in s:
        if char_count[char] == 1:
            return char
    return -1
