'''
Bug : the code resets currentSum to 0 when it's negative
'''

#Corrected Code


def max_subarray_sum(nums):
    # Initialize both to the first element
    max_sum = current_sum = nums[0]

    # Start loop from the second element
    for i in range(1, len(nums)):
        current_sum = max(nums[i], current_sum + nums[i])
        max_sum = max(max_sum, current_sum)

    return max_sum

# Example usage
arr = [-3, -2, -1, -4]
result = max_subarray_sum(arr)
print("Maximum subarray sum is:", result)
