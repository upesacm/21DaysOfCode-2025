"""
1.  The loop for char in char_count does not maintain the order of characters from the input string.
2.  The current approach gives incorrect results as the loop for char in char_count does not gurantee same order as the input string so it may pick the wrong first non-repeating character. Also s.index(char) has worst case time complexity of O(n^2)
"""

#3. 
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1






