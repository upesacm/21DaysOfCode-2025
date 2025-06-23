# prmpt the user to enter the string

string = input("Enter the string: ")

def count_string():
    count = 0
    Character = input("Enter the character: ")
    for word in string.lower():
        if Character == word :
            count += 1
    print(f"the Occurrence of the character in the string is: {count}")


count_string()
