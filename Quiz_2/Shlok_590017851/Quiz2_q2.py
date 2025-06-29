def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for index, char in enumerate(s):
        if char_count[char] == 1:
            return index  
    return -1 
print(first_non_repeating("leetcode"))     
print(first_non_repeating("aabbccdde"))    
print(first_non_repeating("aabbcc"))      
print(first_non_repeating("swiss"))      
