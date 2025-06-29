# correct answer is:
# A) Empty string should return False since it contains no digits

def is_digits_only(s):
    if len(s) == 0:
        return False  # Empty string should not return True
    for char in s:
        if char < '0' or char > '9':
            return False
    return True
  
user_input = input("Enter a string: ")

if is_digits_only(user_input):
    print("The string contains only digits.")
else:
    print("The string does not contain only digits.")
