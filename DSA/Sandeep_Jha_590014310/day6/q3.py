def long_subarray(nums):
    sub = []
    small = float("-inf")
    for n in nums:
        if small<n:
            small = n
            sub.append(n)
        else:
            sub.clear()
            sub.append(n)
            small = n
        
    return len(sub)

print(long_subarray((1, 2, 2, 3, 4, 1, 2, 3, 4, 5))) #5
print(long_subarray((5, 4, 3, 2))) #1