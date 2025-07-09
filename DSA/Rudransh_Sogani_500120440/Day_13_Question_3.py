s=input("Enter a string: ")
words=s.split()
reverse=words[::-1]

result=""
for word in reverse:
    if result!="":
        result+=" "
    result+=word

print(result)
