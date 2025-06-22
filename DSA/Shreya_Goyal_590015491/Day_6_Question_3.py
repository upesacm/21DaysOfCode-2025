arr = []
print("Enter 10 numbers:")

for i in range(10):
    n = int(input())
    arr.append(n)

c = 1
maxlength = 1

for i in range(1, 10):
    if arr[i]==arr[i-1]+1:
        c+=1
        if c > maxlength:
            maxlength=c
    else:
        c = 1

print("Length of longest consecutive subarray:", maxlength)
