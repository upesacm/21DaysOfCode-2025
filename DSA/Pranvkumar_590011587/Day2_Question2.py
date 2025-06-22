def first_and_last(nums):
    if not nums:
        return None  
    return (nums[0], nums[-1])

# Example :
nums = [1, 2, 3, 4]
result = first_and_last(nums)
print(result)  