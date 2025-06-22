Your task:
Find the length of the longest contiguous subarray with consecutive increasing elements.

def longestConsecutiveSubarray(nums):
    if len(nums) == 0:
        return 0
    longest = 1
    count = 1
    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            count = count + 1
        else:
            count = 1
        if count > longest:
            longest = count
    return longest
