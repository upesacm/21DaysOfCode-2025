'''
1. The bug may be that in #Line A, it preserves insertion order but not necessarily in the exact order of original string appearance.
2. According to me the code was working fine with some test cases but it may fail in cases where duplicate element or characters that
appear earlier than the actual first non - repeating character.
3. The correct version or more enhanced version can be as follows : 

def first_non_repeating(s):
    char_count = {}

    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1
'''
