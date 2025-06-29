
#Q1-  find the bug
#  =the bug is in line A → for char in char_count:
# bug = this loops through the dict keys in the order they were  added but thats  not same as order of chars in string , if some char repeated later
# = also line B uses s.index(char) which is not always correct bcz if same char appears more than once and first time was repeated still s.index(char) will return first position which may be wrong

# Q2-  why is this wrong
# = bcz we should check chars in order they appear in string not the order in dictionary AND also we should check based on original string not dict keys

#Q3-  fixed version below

def first_non_repeating(s):
    char_count = {}
# first count all chars
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
#now go through string left to right and check first char whose count is 1
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1  #if no non repeating found
        
