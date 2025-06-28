def reverse_words(string):
    leading = 0
    while leading < len(string) and string[leading] == ' ':
        leading += 1

    trailing = 0
    i = len(string) - 1
    while i >= 0 and string[i] == ' ':
        trailing += 1
        i -= 1

    leading = ' ' * leading
    trailing = ' ' * trailing

    words = string.strip().split()
    reverse_words = ' '.join(words[::-1])

    return  leading + reverse_words + trailing

string = input("Enter a string : ")
print(f"\"{reverse_words(string)}\"")
