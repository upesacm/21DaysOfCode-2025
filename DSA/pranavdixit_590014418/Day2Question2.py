def first_and_last(nums):
    if not nums:
        return "Array is empty"
    return f"First: {nums[0]}, Last: {nums[-1]}"

# Example usage:
print(first_and_last([1, 2, 3, 4]))   
print(first_and_last([7]))           
print(first_and_last([5, 9, 2]))     
