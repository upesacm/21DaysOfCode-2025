'''
1.  The bug is in Line B. We should't be incrementing the value of 'current' as the value we swapped from nums[right] could be 0, 1 or 2
    which needs to be checked in the next iteration.


2.  When the condition comes to the final else, that is, num[current] == 2, we swap it with nums[right]. But this nums[right] might still 
    be 2 or maybe something else. Incrementing 'current' in this case leads to skipping checking this value leaving some 2 s in the wrong
    place.


3.  Corrected implmentation : 

def sort_colors(nums):
    left, current, right = 0, 0, len(nums) - 1

    while current <= right:
        if nums[current] == 0:  
            nums[left], nums[current] = nums[current], nums[left]
            left += 1
            current += 1  # Line A
        elif nums[current] == 1:  
            current += 1
        else:  # Blue (nums[current] == 2)
            nums[current], nums[right] = nums[right], nums[current]
            right -= 1

    return nums
'''
