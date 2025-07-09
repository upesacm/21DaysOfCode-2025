    # 1. Identify the bug in the algorithm
    #    The bug is in how the "first non-repeating" character is identified.
    #    Line A (`for char in char_count:`) iterates over the keys of a dictionary,
    #    which does not guarantee insertion order (pre-Python 3.7, and even post-3.7,
    #    relying solely on dictionary order for this problem is brittle).
    #    Line B (`return s.index(char)`) finds the index of a character, but if the
    #    character was found out of its original string order, it might not be
    #    the *first* non-repeating character.

    # 2. Explain why the current approach gives incorrect results
    #    The current approach gives incorrect results because it loses the
    #    original ordering of characters in the string `s`. While `char_count`
    #    correctly stores frequencies, when we iterate through `char_count`'s keys
    #    to find a character with a count of 1, we are not guaranteed to
    #    process them in the order they appeared in the input string `s`.
    #    For example, in "abacaba", 'b' appears before 'c', but if the dictionary
    #    iteration gives 'c' first, it would incorrectly return the index of 'c'.
    #    To find the *first* non-repeating character, we must check characters
    #    in the sequence they originally appeared in the string.

def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i

    return -1