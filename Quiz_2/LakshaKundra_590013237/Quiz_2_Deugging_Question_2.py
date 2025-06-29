// Answer - 1
// the bug is for char in char_count
// because this loop iterates over characters in char_count and does not store original characters
// second bug is that return s.index(char)
//it searches the string again for index

// Answer - 2
//it gives wrong result because it may return wrong character due to the wrong for loop above

//CORRECTED CODE
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1
