s=input("enter the string: ")
output=""

for char in s:
    if char not in output:
        output+=char

print(output)
