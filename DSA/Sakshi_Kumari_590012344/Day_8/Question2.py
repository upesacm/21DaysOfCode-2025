Your task: Count the occurrences of a specific character in a string (case sensitive).
text = input("Enter a string: ")
char = input("Enter the character you want to count: ")

if len(char) != 1:
    print("Please enter only a single character.")
else:
    count = 0
    for ch in text:
        if ch == char:
            count += 1

    print(f"The character '{char}' appears {count} time(s) in the string.")
