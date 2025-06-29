#The bug:
#(1) char_count only stores unique characters, not their positions in the string.

#(2) s.index(char) (Line B) searches the string again, but it does not ensure that the returned character is the first non-repeating one—just the first occurrence of a character that appears only once.

#Why the current approach gives incorrect results ?

#The problem requires first non-repeating in traversal order, not just any non-repeating character.
#The original approach decouples frequency counting from order checking, leading to incorrect results.

#Corrected Version
def first_non_repeating(s):
    char_count = {}
    
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1
