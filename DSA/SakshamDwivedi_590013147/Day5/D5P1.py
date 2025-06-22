#Fixed Input Solution
arr = [4, 1, 2, 1, 2]
arr_freq = {}
for i in range(len(arr)):
    if arr[i] not in arr_freq:
        arr_freq[arr[i]] = 1
    else:
        arr_freq[arr[i]] += 1
print("Unique Element(s) : ")
for i in arr_freq:
    if arr_freq[i] == 1:
        print(i)

#Custom Input Solution
arr = list(int(x) for x in input("Enter an array : ").split())
arr_freq = {}
for i in range(len(arr)):
    if arr[i] not in arr_freq:
        arr_freq[arr[i]] = 1
    else:
        arr_freq[arr[i]] += 1
print("Unique Element(s) : ")
for i in arr_freq:
    if arr_freq[i] == 1:
        print(i)

#Abandoned solution
arr = [4, 1, 2, 1, 2]
unique = []
for i in range(len(arr)):
    if arr[i] not in unique:
        unique.append(arr[i])
    else:
        unique.remove(arr[i])
print("Unique element(s) : ")
for i in range(len(unique)):
    print(unique[i])
