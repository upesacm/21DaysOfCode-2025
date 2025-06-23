"""
1. Bug: Initializing currentSum to 0 causes the function to return 0 for arrays with all negative numbers, which is incorrect since the maximum subarray sum should be the largest (least negative) element.
2. For all-negative arrays, the function incorrectly returns 0 instead of the maximum (least negative) value.
3. For arr = [-3, -2, -1, -4], the function returns 0, but the correct answer is -1.
4. Corrected Python version:
"""

def max_subarray_sum(nums):
	if not nums:
		raise ValueError("Input array is empty")
	max_sum = current_sum = nums[0]
	for num in nums[1:]:
		current_sum = max(num, current_sum + num)
		max_sum = max(max_sum, current_sum)
	return max_sum

# Example:
arr = [-3, -2, -4]
print(max_subarray_sum(arr)) 
