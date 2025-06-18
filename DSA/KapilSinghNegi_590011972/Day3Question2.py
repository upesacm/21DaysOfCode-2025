arr = [int(i) for i in input().split(sep=',')]
unique = list()
for i in arr:
    if i not in unique:
        unique.append(i)
    else:
        print(True)
        exit()
print(False)
