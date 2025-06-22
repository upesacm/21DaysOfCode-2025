def isPalindrome(nums):
    return nums == nums[::-1]

def isPalindrome(nums):
    left, right = 0, len(nums) - 1
    while left < right:
        if nums[left] != nums[right]:
            return False
        left += 1
        right -= 1
    return True
print(isPalindrome([1, 2, 3, 2, 1]))   # Output: True
print(isPalindrome([1, 2, 3, 4]))      # Output: False
print(isPalindrome([5, 5, 5, 5]))      # Output: True
