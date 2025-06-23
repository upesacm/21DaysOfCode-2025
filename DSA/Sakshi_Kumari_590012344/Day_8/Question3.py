Your task: Return the string with all characters in reverse order.
def reverse_string(text):
    return text[::-1]

user_input = input("Enter a string: ")
reversed_text = reverse_string(user_input)
print("Reversed string:", reversed_text)
