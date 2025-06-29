#The correct option is option A hich states that "Empty string should return False since it contains no digits"
#The options B,C and D are not valid/do not pose as an error for this function

def is_digits_only(s):
    if len(s) == 0:
        print("Empty String.")
        return False  # Fix: Empty string is not considered "only digits"
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

#Example Check
user_input=input("Enter a string to check if it contains only digits: ")
result=is_digits_only(user_input)
if (result):
  print("The string contains only digits.")
else:
  print("The string does not contain only digits.")
