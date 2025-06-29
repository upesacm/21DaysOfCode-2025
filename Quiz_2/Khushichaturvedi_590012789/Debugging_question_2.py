#1. Identify the bug in the algorithm
#The loop for char in char_count:
#checks characters in dictionary order, not
#the original string order.

#2. Explain why the current approach gives incorrect results
#It may return a non-repeating character that
#appeared later in the string, 
#because char_count doesn't track the actual
#position of first occurrence.

#3. Provide the corrected implementation
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1
