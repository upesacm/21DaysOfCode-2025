def isPalindrome(nums):
    return nums == nums[::-1]
print(isPalindrome([1, 2, 3, 2, 1])) 
print(isPalindrome([1, 2, 3, 4]))    
print(isPalindrome([5, 5, 5, 5]))  
