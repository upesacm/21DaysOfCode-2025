def check_palindrome(nums):
    return nums == nums[::-1]
    
print(check_palindrome((1,2,3,3,2,1))) #true
print(check_palindrome((1,2,3))) #false