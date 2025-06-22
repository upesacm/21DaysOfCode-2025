arr1 = [int(i) for i in input().split(sep=',')]
arr2 = [int(i) for i in input().split(sep=',')]
count = dict()
for i in arr1:
    if i in count:
        count[i] += 1
    else:
        count[i] = 1
for i in arr2:
    if i in count and count[i]!=0:
        count[i]-=1
    else:
        print(False)
        exit()
print(True)
