def is_palindrome(nums):
    return nums == nums[::-1]

print(is_palindrome([1, 2, 3, 2, 1])) 
 # Output: True
