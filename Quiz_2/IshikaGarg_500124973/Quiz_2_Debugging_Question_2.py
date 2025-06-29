Question 2: First Non-Repeating Character Algorithm

Bug:
In the second loop (for char in char_count), the code iterates over the dictionary keys, which might not preserve the order of appearance from the original string. So it can return the wrong index.

Why it's incorrect:
We need to find the first non-repeating character in the original string order, not just the first key in the dictionary with count 1.

Fixed Implementation:
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Check characters in the string order
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1

Explanation:
Now we iterate over the original string, checking char_count to find the first non-repeating character in proper order, and return its index.
