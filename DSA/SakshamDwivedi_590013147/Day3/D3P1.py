#Fixed Input Array (The purpose of these ones are for a quick test)
arr = [2, 3, 9, 9]
k = 2
arr = sorted(arr)
result = 0
i = 0
while (i < len(arr)):
    freq = 1
    while ((i + freq) < len(arr) and (arr[i] == arr[i + freq])):
        freq += 1
    if freq == k:
        result += arr[i]
    i += freq

print(result)

#Custom Input Array (The purpose of these ones are for custom and diverse testing)
arr = list(int(x) for x in input("Enter an array : ").split())
k = int(input("Enter the frequency to search : "))
arr = sorted(arr)
result = 0
i = 0
while (i < len(arr)):
    freq = 1
    while ((i + freq < len(arr)) and (arr[i] == arr[i + freq])):
        freq += 1
    if freq == k:
        result += arr[i]
    i += freq

print(result)

#Abandoned solution, it works though try it
'''arr = list(int(x) for x in input("Enter an array : ").split())
k = int(input("Enter the frequency to search : "))
freq = 1
result = 0
arr = sorted(arr)
for i in range(len(arr) - 1):
    if arr[i] == arr[i-1]:
        continue
    if arr[i] == arr[i+1]:
        freq += 1
    if freq == k:
        result += arr[i]
    freq = 1
if arr[-1] != arr[-2]:
        result += arr[-1]
print(result)'''
