def string_length_and_case(s):
    length = len(s)
    upper = s.upper()
    lower = s.lower()
    print(f'Length: {length}, Original: "{s}", Uppercase: "{upper}", Lowercase: "{lower}"')

input_str = input("Enter a string: ")
string_length_and_case(input_str)
