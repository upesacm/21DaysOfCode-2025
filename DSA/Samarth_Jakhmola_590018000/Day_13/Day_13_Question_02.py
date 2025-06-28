def palindrome_permutation(string):
    if len(string) == 0:
        return -1
    frequency = {}
    count = 0
    for i in string:
        if i in frequency:
            frequency[i] += 1
        else:
            frequency[i] = 1

    for i in frequency:
        if frequency[i] % 2 == 1:
            count += 1

    return count

string = input("Enter a string : ")
print("Invalid input. Please provide a valid input." if palindrome_permutation(string) == -1 else "true" if palindrome_permutation(string) 
<= 1 else "false")

