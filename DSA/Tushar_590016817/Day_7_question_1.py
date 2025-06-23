def string_length_and_case_variants(s):
    length = len(s)
    uppercase = s.upper()
    lowercase = s.lower()
    print(f"Length: {length}, Original: \"{s}\", Uppercase: \"{uppercase}\", Lowercase: \"{lowercase}\"")

# Test examples
string_length_and_case_variants("Hello World")
string_length_and_case_variants("Python")
string_length_and_case_variants("Programming123")
