#the given function returns the index of the of the 1st non repeating character, to return the actual character, we need to return the char. rest  of the code is correct

def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for char in char_count: # Line A
        if char_count[char] == 1:
            #return s.index(char) # Line B
            return char #corrected
    return -1