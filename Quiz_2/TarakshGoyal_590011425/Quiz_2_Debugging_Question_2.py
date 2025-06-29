def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i, char in enumerate(s):##  //HERE WAS THE ERROR //char_count holds unique characters this may loose the original sequence.
        if char_count[char] == 1:
            return i
    return -1

# Test cases
str1 = "abac"
str2 = "aabbcc"
str3 = "teeter"

print(f"str1 -> {first_non_repeating(str1)}")
print(f"str2 -> {first_non_repeating(str2)}")
print(f"str3 -> {first_non_repeating(str3)}")
