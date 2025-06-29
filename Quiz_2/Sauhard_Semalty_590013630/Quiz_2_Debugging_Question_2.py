def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        if not char.isspace(): # Ignore whitespaces
            char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in s: # Line A
        if not char.isspace() and char_count[char] == 1:
            return s.index(char) # Line B
    return -1

# 1. Identify the bug in the algorithm
# --> [!] The 'dict' type did not preserve insertion order before Python 3.17.
#     so the correct behaviour would be to iterate over the string instead.
#     [!] The function should ignore whitespaces like newlines, tabs, spaces etc.
#
# 2.  [!] The current implementation may or may not preserve the
#     insertion order (before Python 3.7), and will also count whitespaces as characters.
