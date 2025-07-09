# --- Task 1: Bug line ---
# Line B: current += 1 after swapping with right

# --- Task 2: Why this causes issues ---
# - After swapping with nums[right], we don't know what value came in
# - Incrementing current can skip over a 0 or 1, leading to incorrect sorting

# --- Task 3: Corrected version below:
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1
        elif nums[current] == 1:
            current += 1
        else:  # nums[current] == 2
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1
    return nums
