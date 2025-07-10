s=input("Enter the string: ")
def mods(s):
    mod=""
    count=1
    for i in range(1,len(s)):
        if s[i]==s[i-1]:
            count+=1
        else:
            mod+=s[i-1]+str(count)
            count=1
    mod+=s[-1]+str(count)
    return mod

print("Compressed:", mods(s))
