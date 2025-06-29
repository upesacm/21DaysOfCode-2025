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

    #Part A
    # Line A: Iterating over dictionary keys doesn’t guarantee order
    # Line B: Using s.index(char) returns the first index even for repeated chars

    #Part B
    # The functions checks characters in dictionary key order, not in the same order as they are in the string.
    # It should iterate over the string directly, not the dictionary.

#Correct Solution
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1

