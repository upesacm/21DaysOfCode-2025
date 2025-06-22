#Fixed Input
arr1 = [1, 2, 3, 4]
arr2 = [4, 3, 2, 1]
arr1 = sorted(arr1)
arr2 = sorted(arr2)
eq = False
if arr1 == arr2:
    eq = True
    print(eq)
else:
    eq = False
    print(eq)

#Custom Input Array
arr1 = list(int(x) for x in input("Enter array 1 : ").split())
arr2 = list(int(y) for y in input("Enter array 2 : ").split())
arr1 = sorted(arr1)
arr2 = sorted(arr2)
eq = False
if arr1 == arr2:
    eq = True
    print(eq)
else:
    eq = False
    print(eq)
