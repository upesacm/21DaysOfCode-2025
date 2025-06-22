#Solution 1
#Fixed Input Array (For quick test)
print("Solution 1 Fixed Input")
arr = [4, 2, 3, 1, 5]
arr = sorted(arr)
min_element = arr[0]
print("Smallest Element : ", min_element)

#Custom Input Array (For multiple test purposes)
print("Solution 1 Custom Input")
arr = list(int(x) for x in input("Enter an array : ").split())
arr = sorted(arr)
min_element = arr[0]
print("Smallest Element : ", min_element)



#Solution 2
#Fixed Array Input
print("Solution 2 Fixed Input")
min_element = arr[0]
for i in range(len(arr)):
    if min_element > arr[i]:
        min_element = arr[i]
print("Smallest Element : ", min_element)

#Custom Input Array
print("Solution 2 Custom Input")
arr = [4, 2, 3, 1, 5]
arr = list(int(x) for x in input("Enter an array : ").split())
min_element = arr[0]
for i in range(len(arr)):
    if min_element > arr[i]:
        min_element = arr[i]
print("Smallest Element : ", min_element)
