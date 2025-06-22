arr = sorted([int(i) for i in input().split(',')], reverse=True)

if len(arr) < 2:
    print(-1)
    exit()

unique = []

i = 0
while i < len(arr):
    if i + 1 < len(arr) and arr[i] == arr[i + 1]:
        while i + 1 < len(arr) and arr[i] == arr[i + 1]:
            i += 1
    else:
        unique.append(arr[i])
    i += 1

if len(unique) >= 2:
    print(unique[1])
else:
    print(-1)
