'''
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
'''
"""
Tasks:
1. Identify the bug in the algorithm
# In Line B : We want to return the charachter not the index.
2. Explain why the current approach gives incorrect results.
# Because we are printing the indexes not the charachters themself.
3. Provide the corrected implementation
#Below
"""
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count: # Line A
        if char_count[char] == 1:
            return char # Line B , printing only the char not the index.
    return -1
