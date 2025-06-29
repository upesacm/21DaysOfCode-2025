#The bug is in the second loop:

#for char in char_count:
#It iterates over the keys of the dictionary char_count, which does not guarantee the original order of characters in the string. Therefore, it might not return the first non-repeating character in the original string order.
#The dictionary char_count stores the frequency of each character, but when we iterate over its keys, the order might not match the input string's order. This can cause the algorithm to return a non-repeating character, but not necessarily the first one that appears in the string.

#For example:

#Input: "aabbcde"
#Expected Output: Index of 'c' → 4
#But the code might return index of 'd' or 'e' depending on dictionary order.
#Also, using s.index(char) inside the loop is inefficient if the character occurs multiple times.

# correct code 
def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating in original string order
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1
