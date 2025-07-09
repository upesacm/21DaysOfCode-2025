text=input("enter the sentence:")
s1=""

for char in text:
    if char !=' ':
        s1+=char

print("remove all: ", s1)

trim=text.strip()

print("trim:",trim)

s3=""
space=False

for char in text.strip():
    if char!=' ':
        s3+=char
        space=False
    else:
        if not space:
            s3+= ' '
            space=True

print("single spaces:", s3)
