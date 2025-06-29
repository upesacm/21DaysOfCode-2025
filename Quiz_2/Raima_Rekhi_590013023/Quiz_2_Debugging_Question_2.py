#1.The bug in the algorithm is that Line A(for char in char_count) may not preserve the order of characters as they appear in the string s.
#The problem asks for the first non-repeating character, so preserving the order of characters from the original string is critical.

#2.It gives incorrect results because Line A does not guarantee the characters are checked in the same order as they appear in the original string s.
#As a result, Line B (s.index(char)) might return the index of a non-repeating character that is not actually the first non-repeating character in the string.

#3.

def first_non_repeating(s):
    char_count = {}
    # Count frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # More efficient method to find first non-repeating
    for idx, char in enumerate(s): # Modified Line A
        if char_count[char] == 1:
            return idx # Modified Line B

    return -1

#Example Check
user_input = input("Enter a string: ")
index = first_non_repeating(user_input)

if (index != -1):
    print(f"The first non-repeating character is '{user_input[index]}' at index {index}.")
else:
    print("There is no non-repeating character in the string.")
