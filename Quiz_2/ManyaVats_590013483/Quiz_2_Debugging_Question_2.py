def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1

1) Bug: The code iterates over the frequency dictionary keys instead of the original string order.

2) Why wrong: Dictionary order may differ from string order, so it doesn’t find the first non-repeating character correctly.

3) Fix: After counting, loop through the original string and return the first character whose count is 1.
