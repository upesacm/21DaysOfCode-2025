def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s):#Bug: Iterating over char_count instead of s causes incorrect order and indexing.
        if char_count[char] == 1:#Why it was wrong: It wassn't preserving the original order of characters in s
            return index  
    return -1  
