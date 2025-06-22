arr = [int(i) for i in input().split(sep=',')]
Min = arr[0]
for i in arr:
    if Min>i:
        Min = i
print(Min)
