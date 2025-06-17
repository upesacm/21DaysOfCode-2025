#This is for a fixed input
arr = [-1, 2, -3, 4, 5]
for i in range(len(arr)):
    if arr[i] < 0:
        arr[i] = 0
print(arr)

#This is for custom input
arr = list(int(x) for x in input("Enter the array : ").split())
for i in range(len(arr)):
    if arr[i] < 0:
        arr[i] = 0
print(arr)
