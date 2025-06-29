# --------------------------------------------
# Question 2: Bug in first_non_repeating function
# --------------------------------------------

# Original Code:
def first_non_repeating_original(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count:  # Line A
        if char_count[char] == 1:
            return s.index(char)  # Line B
    return -1


# Answer:
# The iteration over char_count does not necessarily follow the original order of characters in the string.
# Also, using s.index(char) may return the wrong index if the character appears more than once but non-contiguously.

# Corrected Code:
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating using original string order
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1
