def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count: # Line A
        if char_count[char] == 1:
            return s.index(char) # Line B
    return -1

#the bug is in line A, the loop is iterating over char_count, when it should have been iterating over the orginial string s
#this is giving an error because it does not follow the order of appearance of the characters in the string and hence, the "first" non-repeating character won't necessarily show up in the output
#corrected code:

def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in s: # Line A
        if char_count[char] == 1:
            return s.index(char) # Line B
    return -1
