s1=input("enter the first string: ")
s2=input("enter the second string: ")

if len(s1)!=len(s2):
    print("False")

n=len(s1)
rotation=False

for i in range(n):
    lr=s1[i:]+s1[:i]
    rr=s1[n-i:]+s1[:n-i]

    if s2==lr or s2==rr:
        rotation=True
        break

print("True" if rotation else "False")
