s=input("Enter a string: ")
values = {}

for c in s:
    if c in values:
        values[c]+=1
    else:
        values[c]=1

odd=0
for v in values.values():
    if v%2!= 0:
        odd+=1

if odd<=1:
    print("True")
else:
    print("False")
