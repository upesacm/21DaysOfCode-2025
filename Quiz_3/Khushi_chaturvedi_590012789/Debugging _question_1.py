#Tasks 1. Identify the specific line(s) causing the bug
#Line 1: right = len(nums) → should be len(nums) - 1
#Line 3: left = mid → should be mid + 1

#Task 2. Explain why this causes infinite loops or incorrect results
#Line 1 bug: right points outside the array → may cause index error.
#Line 3 bug: left = mid doesn't shrink the range → can cause infinite loop.

#Task 3. Provide the corrected implementation
def binary_search(nums, target):
    left, right = 0, len(nums) - 1  

    while left <= right:  
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1  
        else:
            right = mid - 1
    return -1
