#Fixed Input
string = "programming"
string = string.lower()
char = 'r'
char_count = 0
for i in range(len(string)):
    if string[i] == char:
        char_count += 1

print("Character count : ", char_count)

#Custom Input
string = input("Enter the string : ")
string = string.lower()
char = input("Enter the character : ")
char_count = 0
for i in range(len(string)):
    if string[i] == char:
        char_count += 1

print("Character count : ", char_count)

#Python supremacy
string = input("Enter the string : ")
string = string.lower()
char = input("Enter the character : ")
char_count = string.count(char)
print("Character Count : ", char_count)
