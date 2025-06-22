def check_Palindrome(nums):
    left = 0
    right = len(nums) - 1

    while left < right:
        if nums[left] != nums[right]:
            return False
        left += 1
        right -= 1

    return True
    
#example
nums = [1, 3, 2, 1] #output=false