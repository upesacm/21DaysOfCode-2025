''' As we are told it has n+1 elements where all elements are in range 1 to n which only 1 repeating duplicate, loop can be broken
after 1st match'''
#Fixed Array Input
arr = [1, 3, 2, 4, 1]
arr = sorted(arr)
for i in range(len(arr) - 1):
    if (arr[i] == arr[i+1]):
        break
print("Repeated value : ", arr[i])

#Custom Array Input
arr = list(int(x) for x in input("Enter the array : ").split())
arr = [1, 3, 2, 4, 1]
arr = sorted(arr)
for i in range(len(arr) - 1):
    if (arr[i] == arr[i+1]):
        break
print("Repeated value : ", arr[i])
