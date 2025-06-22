def find_missing(nums):
    n = len(nums)
    expected_sum = n * (n + 1) // 2
    actual_sum = sum(nums)
    return expected_sum - actual_sum

# Example usage:
print(find_missing([3, 0, 1]))                      
print(find_missing([0, 1]))                         
print(find_missing([9, 6, 4, 2, 3, 5, 7, 0, 1]))    
