# 2. The bug in first_non_repeating is that iterating over char_count does not preserve the original order of characters in the string,
# so it may not return the first non-repeating character as it appears in the string.
# The current approach gives incorrect results because dictionaries do not guarantee order and the order is based on first occurrence, 
# but using string.index(char) can give wrong index if the character repeats.
# Corrected implementation:
def first_non_repeating(string):
	char_count = {}
	# Count frequencies
	for char in string:
		char_count[char] = char_count.get(char, 0) + 1
	# Find first non-repeating by iterating over the original string
	for index, char in enumerate(string):
		if char_count[char] == 1:
			return index
	return -1

# Example 
test_strings = ["aabbcdd",    "swiss",      "aabbcc",    "python",     ]

for string in test_strings:
    index = first_non_repeating(string)
    if index != -1:
        print(f"In '{string}', first non-repeating character is '{string[index]}' at index {index}")
    else:
        print(f"In '{string}', there is no non-repeating character.")
