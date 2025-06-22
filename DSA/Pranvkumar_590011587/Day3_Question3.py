def second_largest(nums):
    if not nums:
        return None
    nums.sort()  
    return (nums[-2])

# Example :
nums = [1,6,7,8,9,10]
result = second_largest(nums)
print(result) 