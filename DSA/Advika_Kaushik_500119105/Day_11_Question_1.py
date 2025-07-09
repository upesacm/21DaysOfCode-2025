string=input("Enter the string: ")
case=""
for char in string:
    if ('a'<=char <= 'z') or ('A' <= char <= 'Z') or ('0'<= char <= '9'):
        case= case+ char


if(case==case[::-1]):
    print("Palindrome")
else:
    print("Not a Palindrome")
