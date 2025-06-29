def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Find first non-repeating
    for i, char in enumerate(s): # Line A #Dictionaries do not remember order, hence we need to use enumerate for iterating it in the order of the string
        #It needs both i and char as enumerate returns a pair of index and element (0, 'a').
        if char_count[char] == 1:
            return char # Line B #It was return s.index(char) which would return it's index instead of the character itself (This was the biggest bug)
    return -1

print(first_non_repeating("aabbccdee"))
print(first_non_repeating("aabbccddee"))
