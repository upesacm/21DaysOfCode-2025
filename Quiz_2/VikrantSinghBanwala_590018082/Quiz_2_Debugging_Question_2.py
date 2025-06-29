# 1.Bug in algorithm is:
# This loop iterates over the keys of a dictionary that holds frequency counts.
# While Python dictionaries preserve insertion order (from Python 3.7+), relying on this behavior is not always safe for problems that depend on original string index positions.
# More critically, it doesn't guarantee that you're returning the first occurrence of a unique character in the original string—just the first one that was added to the dictionary with frequency 1.

# 2.This approach gives incorrect result because:
# The current approach gives incorrect results because it loses the
# original ordering of characters in the string s. While char_count
# correctly stores frequencies, when we iterate through char_count's keys
# to find a character with a count of 1, we are not guaranteed to
# process them in the order they appeared in the input string s.
# For example, in "abacaba", 'b' appears before 'c', but if the dictionary
# iteration gives 'c' first, it would incorrectly return the index of 'c'.
# To find the first non-repeating character, we must check characters
# in the sequence they originally appeared in the string.

# 3. Correct code for this:
def first_non_repeating(s):
    char_count = {}

    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    for index, char in enumerate(s):
        if char_count[char] == 1:
            return index  
    return -1