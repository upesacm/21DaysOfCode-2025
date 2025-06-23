Your task: Calculate string length and convert to uppercase and lowercase formats.

text = input("Enter a string: ")

length = len(text)

uppercase = text.upper()
lowercase = text.lower()

print("Length:", length)
print("Original:", f'"{text}"')
print("Uppercase:", f'"{uppercase}"')
print("Lowercase:", f'"{lowercase}"')
