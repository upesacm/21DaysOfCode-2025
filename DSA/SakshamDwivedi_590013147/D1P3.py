#Fixed Array
arr = [1, 2, 3, 4, 5]
result = 0
for i in arr:
    result += i

print(result)

#Custom Array
arr = list(int(x) for x in input("Enter the array : ").split())
result = 0
for i in arr:
    result+=i

print(result)
