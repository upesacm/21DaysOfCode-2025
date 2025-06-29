def first_non_repeating(s):
    char_count = {}
    # Counting frequencies
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    # Finding first non-repeating 
    for i, char in enumerate(s):  
        if char_count[char] == 1:
            return i
    return -1

# User input
user_input = input("Enter a string: ")
result = first_non_repeating(user_input)
if result != -1:
    print(f"First non-repeating character is '{user_input[result]}' at index {result}")
else:
    print("No non-repeating character found.")