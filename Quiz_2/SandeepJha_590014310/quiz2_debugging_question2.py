# A student implemented the "First Non-Repeating Character" algorithm but it's giving wrong results:

#original code
''' 
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating by original order
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx
    return -1
'''

# Tasks:
# 1. Identify the bug in the algorithm
#Ans -> The second loop iterates over char_count, which is a dictionary. 
# Dictionaries in Python do not preserve the order of characters as they appear in the string

# 2. Explain why the current approach gives incorrect results
'''Ans -> The function should return the index of the first character in the string that appears only once.
By looping over char_count, you may not check characters in the order they appear in the string.
if the string is "aabbcc", all counts are 2, so it returns -1, which is correct.
The main issue is that the function should check the string in its original order, not the order of unique characters. '''
# 3. Provide the corrected implementation

def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating by original order
    for idx, char in enumerate(s):
        if char_count[char] == 1:
            return idx
    return -1

print(first_non_repeating(s=(input("enter your string: "))))