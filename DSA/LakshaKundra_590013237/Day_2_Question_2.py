def first_and_last(nums):
    first = nums[0]
    last = nums[-1]
    return first, last
nums1 = [1, 2, 3, 4]
nums2 = [7]
nums3 = [5, 9, 2]
print("First:", first_and_last(nums1)[0], "Last:", first_and_last(nums1)[1])
print("First:", first_and_last(nums2)[0], "Last:", first_and_last(nums2)[1])
print("First:", first_and_last(nums3)[0], "Last:", first_and_last(nums3)[1])
