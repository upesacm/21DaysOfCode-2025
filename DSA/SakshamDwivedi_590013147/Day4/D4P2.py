#Fixed Input Array
arr = [1, 2, 3, 4, 5]
k = 2
for i in range(k):
    temp = arr[-1]
    for j in range(0, len(arr) - 1):
        arr[-1-j] = arr[-2-j]
    arr[0] = temp
print("Rotated Array : ", arr)

#Custom Input Array
arr = list(int(x) for x in input("Enter an array : ").split())
k = int(input("Enter the number of rotations : "))
for i in range(k):
    temp = arr[-1]
    for j in range(0, len(arr) - 1):
        arr[-1-j] = arr[-2-j]
    arr[0] = temp
print("Rotated Array : ", arr)

