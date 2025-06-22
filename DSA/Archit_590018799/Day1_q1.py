#solution

nums = [-1, 2, -3, 4, 5]
arr=[]
for i in nums:
    if i < 0:
        arr.append(0)
    else:
        arr.append(i)

print(arr)
