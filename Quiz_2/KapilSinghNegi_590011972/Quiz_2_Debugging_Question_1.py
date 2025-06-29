def is_digits_only(s):
    if len(s) == 0:
        return False
    start = 0
    if s[0] == '-':
        if len(s) == 1:
            return False
        start = 1
    for i in range(start, len(s)):
        ascii_val = ord(s[i])
        if ascii_val < 48 or ascii_val > 57:
            return False
    return True
