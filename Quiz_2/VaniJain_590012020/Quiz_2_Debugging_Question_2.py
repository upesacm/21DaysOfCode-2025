Tasks:
1. Identify the bug in the algorithm
2. Explain why the current approach gives incorrect results
3. Provide the corrected implementation

task 1
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s): 
        if char_count[char] == 1:
            return i
    return -1

task 2
The current function gives incorrect results because it iterates over the dictionary `char_count`, which may not match the string’s original order, and uses `s.index(char)`, which always returns the first occurrence, possibly leading to the wrong index.

task 3
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i 
    return -1 
