def is_palindrome(nums):
    return nums == nums[::-1]

nums = [1, 2, 3, 2, 1]
print(is_palindrome(nums)) 
