def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s): 
        # used enumeratte to find first character of count 1
        if char_count[char] == 1:
            return index
    return -1
print(first_non_repeating("tanisha")) 
# it give so because t is at index 0
# gives incorrect results earlier because it didn,t natch the frequency map