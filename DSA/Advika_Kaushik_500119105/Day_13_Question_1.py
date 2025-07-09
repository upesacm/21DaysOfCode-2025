s1=input("enter the string: ").strip()

words=s1.split()

leng =len(words)

if len(words)>0:
    longest=words[0]
    for word in words:
        if len(words)>len(longest):
            longest=word

print("word count:", len(longest))
print("longest word:", longest)
