def findDuplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)

print(findDuplicate([1, 3, 4, 2, 2]))  
print(findDuplicate([3, 1, 3, 4, 2]))  
print(findDuplicate([1, 1, 2]))       
