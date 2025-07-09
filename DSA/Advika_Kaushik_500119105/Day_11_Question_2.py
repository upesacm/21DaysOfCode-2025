s=input("Enter the string: ")
n=len(s)
longest=""

for i in range(n):
    for j in range(i, n):
        pal=s[i:j+1]
        if pal==pal[::-1] and len(pal)>len(longest):
            longest=pal

print("The longest palindromic substring is:", longest)
