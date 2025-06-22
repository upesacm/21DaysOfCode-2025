#Fixed Array
arr = [1, 2, 3, 4, 5]
result = 0
for i in range(len(arr)):
    if arr[i] % 2 == 0:
        result += arr[i]
print("Sum : ", result)

#Custom Input Array
arr = list(int(x) for x in input("Enter the array : ").split())
result = 0
for i in range(len(arr)):
    if arr[i] % 2 == 0:
        result += arr[i]
print("Sum : ", result)
