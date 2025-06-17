#Fixed Array
arr = [3, 1, 3, 4, 6, 9]
arr = sorted(arr)
repeated = []
for i in range(len(arr) - 1):
    diff = arr[i+1] - arr[i]
    if(diff > 1):
        for j in range(1, diff):
            print("Missing : ", (arr[i+1] - diff) + 1)
            diff -=1

for i in range(len(arr) - 1):
    if(arr[i] == arr[i+1] and arr[i] not in repeated):
        print("Repeated : ", arr[i])
        repeated.append(arr[i])
        
#Input array
arr = list(int(x) for x in input("Enter the array : ").split())
arr = sorted(arr)
repeated = []
for i in range(len(arr) - 1):
    diff = arr[i+1] - arr[i]
    if(diff > 1):
        for j in range(1, diff):
            print("Missing : ", (arr[i+1] - diff) + 1)
            diff -=1

for i in range(len(arr) - 1):
    if(arr[i] == arr[i+1] and arr[i] not in repeated):
        print("Repeated : ", arr[i])
        repeated.append(arr[i])
