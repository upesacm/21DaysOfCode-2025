# --- Task 1: Bug lines ---
# Line 1: right = len(nums) → should be len(nums) - 1
# Line 3: left = mid → should be left = mid + 1

# --- Task 2: Why this causes issues ---
# - Line 1 causes out-of-bounds access since valid indices are 0 to len(nums) - 1
# - Line 3 may cause infinite loop if left == mid, as no progress is made
# - Loop should be while left <= right to include the full range

# --- Task 3: Corrected version below:
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
