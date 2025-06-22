#Fixed Input Array (The purpose of these ones are for a quick test)
arr1 = [1, 2, 3, 4]
arr2 = [1, 2, 2, 4]
def check_dup(arr):
    dup = False
    arr = sorted(arr)
    for i in range(len(arr) - 1):
        if arr[i+1] == arr[i]:
            dup = True
            break
        else:
            dup = False
    return dup

print(check_dup(arr1))
print(check_dup(arr2))

#Custom Input Array (The purpose of these ones are for custom and diverse testing)
arr = list(int(x) for x in input("Enter an array : ").split())
dup = False
arr = sorted(arr)
for i in range(len(arr) - 1):
    if arr[i+1] == arr[i]:
        dup = True
        break
    else:
        dup = False
print(dup)
