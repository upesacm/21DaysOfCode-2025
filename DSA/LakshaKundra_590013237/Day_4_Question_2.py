def rotate_array(nums, k):
    n = len(nums)
    k = k % n  
    return nums[-k:] + nums[:-k]
print(rotate_array([1, 2, 3, 4, 5], 2)) 
print(rotate_array([10, 20, 30], 4))      
print(rotate_array([1, 2], 1))           
