#Fixed Input Array (The purpose of these ones are for a quick test)
arr1 = [10, 20, 30, 40, 40]
arr2 = [5, 5, 5]
def second_largest(arr):
    arr = sorted(arr)
    for i in range(len(arr) - 1):
        if(arr[-1] == arr[-1 - i]):
            continue
        else:
            return arr[-1 - i]
print(second_largest(arr1))
print(second_largest(arr2))

#Custom Input Array (The purpose of these ones are for custom and diverse testing)
arr = list(int(x) for x in input("Enter an array : ").split())
arr = sorted(arr)
for i in range(len(arr) - 1):
    if(arr[-1] == arr[-1 - i]):
        continue
    else:
        print(arr[-1 - i])
        break
