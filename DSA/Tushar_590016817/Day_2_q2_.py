def first_and_last(nums):
    
    if not nums:
        return "Array is empty"
    
    first = nums[0]         # First element
    last = nums[-1]         # Last element
    return f"First: {first}, Last: {last}"


print(first_and_last([1, 2, 3, 4]))
print(first_and_last([7]))
print(first_and_last([5, 9, 2]))
