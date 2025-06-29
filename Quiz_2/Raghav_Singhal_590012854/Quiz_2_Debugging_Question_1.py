def is_digits_only(s):
    if len(s) == 0:
        return False # Line 1
    for char in range(1,len(s)):
        if ord(s[char]) < ord('0') or ord(s[char]) > ord('9'):
            return False
        if ord(s[0]) == ord('-'):
            return False;
    return True