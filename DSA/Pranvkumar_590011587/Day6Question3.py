def longest_consecutive_increasing_subarray(nums):
    if not nums:
        return 0
    max_len = 1
    curr_len = 1
    for i in range(1, len(nums)):
        if nums[i] == nums[i-1] + 1:
            curr_len += 1
            max_len = max(max_len, curr_len)
        else:
            curr_len = 1
    return max_len

# Example :
if __name__ == "__main__":
    print(longest_consecutive_increasing_subarray([1, 2, 2, 3, 4, 1, 2, 3, 4, 5])) 
    print(longest_consecutive_increasing_subarray([5, 4, 3, 2]))                   
    print(longest_consecutive_increasing_subarray([1, 2, 3, 5, 6, 7]))          