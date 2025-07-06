#1. the bug is in line B, we need not to increment current, as it will skip the swapped element that is to be checked 
#2. line A causes incorrect behaviour as it skips the swapped element to be checked
#3. correct code
def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1
    while current <= right:
        if nums[current] == 0: # Red
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1 # Line A
        elif nums[current] == 1: # White
            current += 1
        else: # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current] 
            right -= 1
            
    return nums