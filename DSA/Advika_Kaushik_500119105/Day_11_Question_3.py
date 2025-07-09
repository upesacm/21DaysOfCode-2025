s = input("Enter the string: ")
n = len(s)
count=0

for i in range(n):
    for j in range(i, n):
        pal=s[i:j+1]
        if pal==pal[::-1]:
            count+=1

print("Total number of palindrome substrings:", count)
