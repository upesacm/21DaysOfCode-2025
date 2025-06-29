def is_digits_only(s):
    if len(s) == 0:
        return False  # Empty string should return false because it does not have number
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
a = "12345"
b = ""
c = "12a45"

print(f"for a -> {a} => {'True' if is_digits_only(a) else 'False'}")
print(f"for b -> {b} => {'True' if is_digits_only(b) else 'False'}")
print(f"for c -> {c} => {'True' if is_digits_only(c) else 'False'}")
