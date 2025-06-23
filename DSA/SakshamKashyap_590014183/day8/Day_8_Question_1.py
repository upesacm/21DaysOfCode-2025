# Prompt the user to enter the string

string = input("Enter the string: ")

def lenght():
    string_lenght = len(string)
    return string_lenght

def Upper_Lower_string():
    Upper_string = string.upper()
    lower_string = string.lower()
    return Upper_string , lower_string

#call the function

lenght()
Upper_Lower_string()

l = lenght()
Upper = Upper_Lower_string()

print(f"Length: {l}, Uppercase: {Upper[0]}, Lowercase: {Upper[1]}")

