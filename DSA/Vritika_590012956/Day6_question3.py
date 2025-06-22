def longest_consecutive_increasing_subarray(nums):
    if not nums:
        return 0, []  # No elements in array

    max_length = 1
    current_length = 1
    start_index = 0  # Starting index of the maximum subarray
    temp_start = 0   # start for the current subarray

    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            current_length += 1
            if current_length > max_length:
                max_length = current_length
                start_index = temp_start
        else:
            current_length = 1
            temp_start = i  # start of new subarray

    longest_subarray = nums[start_index:start_index + max_length]
    return max_length, longest_subarray


nums = list(map(int, input("Enter array elements separated by spaces: ").split()))
length, subarray = longest_consecutive_increasing_subarray(nums)
print("Length of longest consecutive increasing subarray:", length)
print("Longest consecutive increasing subarray:", subarray)




