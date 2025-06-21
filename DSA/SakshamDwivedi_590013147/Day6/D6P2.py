#Fixed Array Input
arr1 = [1, 2, 3, 4]
arr2 = [1, 2, 2, 3]
def monotonic(arr):
    for i in range(1, len(arr)):
        if(arr[i] - arr[i-1] <= 0):
            return False
    return True

print(monotonic(arr1))
print(monotonic(arr2))

#Custom Array Input
arr = list(int(x) for x in input("Enter the array : ").split())
def monotonic(arr):
    for i in range(1, len(arr)):
        if(arr[i] - arr[i-1] <= 0):
            return False
    return True

print(monotonic(arr))
