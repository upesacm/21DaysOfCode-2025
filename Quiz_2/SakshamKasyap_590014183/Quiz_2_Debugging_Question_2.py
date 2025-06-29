'''A student implemented the "First Non-Repeating Character" algorithm but it's giving wrong results:

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

Tasks:
1. Identify the bug in the algorithm

Solution: The bug is in Line A.
This loop goes through the dictionary char_count, but dictionaries may not always keep the original order of characters from the input string. So even if a character is non-repeating, it might not be the first one in the actual string.
Also, in Line B, s.index(char) can return the first index of a character even if it's not the first non-repeating character, which can lead to incorrect results.

2. Explain why the current approach gives incorrect results


Solution: 1. The dictionary doesn't necessarily maintain the character order from the input string.
          2. .index(char) might not return the correct index of the first non-repeating character.
          3. Because of this, the wrong index might be returned, or sometimes even a repeating character may be mistakenly considered.

3. Provide the corrected implementation'''

#correct version of code: 

def first_non_repeating(s):
    char_count = {}
    
    # Count how many times each character appears
    for ch in s:
        if ch in char_count:
            char_count[ch] += 1
        else:
            char_count[ch] = 1

    # Go through the string in original order
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i  # Found the first non-repeating character

    return -1  # If all characters are repeating
