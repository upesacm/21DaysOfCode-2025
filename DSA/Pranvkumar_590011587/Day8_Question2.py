def count_character(s, ch):
    return s.count(ch)


input_str = input("Enter a string: ")
char = input("Enter a character to count: ")
print(count_character(input_str, char))