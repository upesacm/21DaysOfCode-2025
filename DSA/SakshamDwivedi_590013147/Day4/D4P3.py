#Fixed Array Input
arr = [0, 1, 2, 2, 3, 0, 4, 2]
num = 2
length = len(arr)
i = 0
while i < length:
    if arr[i] == num:
        arr.remove(arr[i])
        length -= 1
        i -= 1
    i+= 1

print("New length of the array : ", length)
print(arr)

#Custom Input Array
arr1 = list(int(x) for x in input("Enter an array : ").split())
num1 = int(input("Enter the value : "))
length1 = len(arr1)
i = 0
while i < length1:
    if arr1[i] == num1:
        arr1.remove(arr1[i])
        length1 -= 1
        i -= 1
    i+= 1

print("New length of the array : ", length1)
print(arr1)

