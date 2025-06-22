arr1 = [1, 2, 2, 4, 2, 2, 1]
arr2 = [1, 3, 2, 5]
#Best solution Fixed Input
print("Fixed Best Solution")
def palindrome(arr):
    size = len(arr)
    for i in range(size//2):
        if(arr[i] == arr[size - i - 1]):
            pal = True
            continue
        else:
            pal = False
            break
    if(pal):
        return True
    else:
        return False
    
print(palindrome(arr1))
print(palindrome(arr2))

#Best Solution Custom Input
print("Custom Best Solution")
arr = list(int(x) for x in input("Enter an array : ").split())
size = len(arr)
for i in range(size//2):
    if(arr[i] == arr[size - i - 1]):
        pal = True
        continue
    else:
        pal = False
        break
if(pal):
    print(True)
else:
    print(False)
    
#Fixed Input Array
print("Fixed Solution")
def palindrome(arr):
    rev_arr = []
    for i in range(len(arr) - 1, -1, -1):
        rev_arr.append(arr[i])
    if(rev_arr == arr):
        return True
    else:
        return False

print(palindrome(arr1))
print(palindrome(arr2))


#Custom Input Array
print("Custom Solution")
arr1 = list(int(x) for x in input("Enter an array : ").split())
rev_arr = []
for i in range(len(arr1) - 1, -1, -1):
    rev_arr.append(arr1[i])
if rev_arr == arr1:
    print("True")
else:
    print("False")

#Python Specific (Gigachad Move)
print("Python solution")
arr1 = list(int(x) for x in input("Enter an array : ").split())
rev_arr = arr1[::-1]
if rev_arr == arr1:
    print("True")
else:
    print("False")
