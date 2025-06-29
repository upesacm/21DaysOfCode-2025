# "First Non-Repeating Character" algorithm

# def first_non_repeating(s):
#     char_count = {}
#     # Count frequencies
#     for char in s:
#         char_count[char] = char_count.get(char, 0) + 1
#     # Find first non-repeating
#     for char in char_count: # Line 9
#         if char_count[char] == 1:
#             return s.index(char) # Line 11
#     return -1

# Tasks:
# 1. Identify the bug in the algorithm
# 2. Explain why the current approach gives incorrect results
# 3. Provide the corrected implementation

# TASK 1 :-
# Bug in line no. 9 - for char in char_count:
# Issue in this line - Thiss iterates overr the keys of the dictionaryy char_count, which does not guarantee the order of characters as they appeared in the string s. // In old versions, dictionaries didn’t keep the order of items. bUT in latestt version, they remember the order you added things — but youu shouldn't rely on that for important logic & works.

# Bug in line no. 11 - return s.index(char)
# Even if the dictionary is orderedd, using s.index(char) again finds the first index of char in the original string. This could return incorrect results if that character appeared multiple times but was inserted into the dictionary after a unique one.



# TASK 2 :- 
# sUPPOSe for example : s = "aabdcdb"
# the output should bee - {'a': 2, 'b': 2, 'd': 2, 'c': 1}
# When looping through char_count, the order might be 'a', 'b', 'd', 'c'. Only 'c' appears once, so the codee does s.index('c'), which gives 4 (its position in the original string).
# thats right but now in the case like - 
# s = "aabccdbe"
# output is - {'a': 2, 'b': 2, 'c': 2, 'd': 1, 'e': 1}
# Iteration order in char_count: 'a', 'b', 'c', 'd', 'e' — finds 'd' first, returns s.index('d') which is 6.
# But the actual first non-repeating character in the original string is 'd', so this is fine.
# Now the problem is when we take - s = "teeter"
# Output is - {'t': 2, 'e': 3, 'r': 1}
# Iteration over dict: 't', 'e', 'r' → sees 'r' as first unique → s.index('r') -> 5
# But actually, 'r' occurs last — we needed to scan original string in order,not just look at the dictionaryyyyy

# TASK 3 :-
# correct is -
def first_non_repeating(s):
    char_count = {}  # frequency count karega
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s): # scanny
        if char_count[char] == 1:
            return i
    return -1
