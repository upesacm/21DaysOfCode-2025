# Bug in the algorithm 
# for char in char_count may not follow the string's original order.
# s .index(char) can give wrong index if the character appears multiple times.

# Why the current approach gives wrong results :
# 1. char_count doesn't guarantee original order of characters.
# 2. s.index(char) gives first occurrence, which can be misleading if the char repeats.

# Full implementation
# 3. Provide the corrected implementation

# This function finds the index of the first non-repeating character
def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):
        if char_count[char] == 1:
            return i
    return -1


user_input = input("Enter a string: ")
index = first_non_repeating(user_input)

if index != -1:
    print(f"First non-repeating character: '{user_input[index]}' at index {index}")
else:
    print("No non-repeating character found.")










