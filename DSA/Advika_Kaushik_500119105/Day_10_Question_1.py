s1=input("Enter the first string: ")
s2=input("Enter the second string: ")

if s1==s2:
    print("equal")
else:
    print("not equal")

if s1.lower()==s2.lower():
    print("equal ignoring case")
else:
    print("unequal ignoring case")

if s1<s2:
    print(s1, "comes before", s2)
elif s2<s1:
    print( s2, "comes before", s1)
else:
    print("strings are identical")
