text=input("Enter the string: ")
letter=input("Enter the letter whose frequnecy you want to count: ")

freq=0

for char in text:
    if char == letter:
        freq+=1

print("Frequency: ", freq)
