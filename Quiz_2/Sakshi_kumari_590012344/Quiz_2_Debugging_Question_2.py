2.  
1. Identify the bug in the algorithm?

Bug 1 – Looping through the dictionary
First bug is in this line of the given code: for char in char_count:  # Line A
 Problem with this line is:- checking the characters from the dictionary char_count.But the problem is that a dictionary doesn't always keep the characters in the same order as they were in the original string. 
 So even if it finds a character that appears only once,it might not be the first one which is what we actually want.

   Bug 2 – Using .index() to get position
Second bug is in this line of the code:- return s.index(char)  # Line B
Problem with this line is that:- Using s.index(char) can also give the wrong answer.
It always returns the position of the first time that character comes in the string even if we’re checking it later. So, if a character appears more than once, we might get the wrong index.


2. Explain why the current approach gives incorrect results?

Even though the character counts are correct, the code:

:- Doesn't check characters in the order they appear in the string.

:- Uses index() in a way that can give wrong positions.

This makes the output unreliable when multiple characters repeat.


3. Provide the corrected implementation.

def first_non_repeating(s):
    char_count = {}
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1
    for i in range(len(s)):
        if char_count[s[i]] == 1:
            return i
    return -1


