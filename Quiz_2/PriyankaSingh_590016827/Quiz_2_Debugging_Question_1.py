def is_digits_only(s):
    if len(s) == 0:
        return False 
    for char in s:
        if not char.isdigit(): 
            return False
    return True

user_input = input("Enter a string: ")
if is_digits_only(user_input):
    print("The string contains only digits.")
else:
    print("The string does NOT contain only digits.")