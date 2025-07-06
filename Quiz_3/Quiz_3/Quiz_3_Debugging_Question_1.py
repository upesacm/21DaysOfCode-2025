'''
1. Line 1 : The bug in this line is that right should have allocated the value 'len(nums) - 1' and not just 'len(nums)' because indices 
            range from 0 to len(nums) - 1.

   Line 2 : There should be an equal to ( = ) sign as well in the condition to ensure that the last element is also checked.
   
   Line 3 : The bug here is that the value of left should have been 'mid + 1' and not just 'mid' as we've already checked for the 
            target == mid and we know that mid is not equal to the target, hence we've arrived at the next conditon. 

         
2. Setting right = len(nums), it can lead 'mid' to refer to some invalid index which can consequently lead to 'IndexError'. The last element
   might not get checked due to the absense of an equal to sign. Due to the value of 'mid' not getting updated, it can lead to an infinite
   loop as 'left' might never move forward if 'mid' remains the same. 


3. Corrected implementation : 

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
'''
