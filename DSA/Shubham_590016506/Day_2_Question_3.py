from collections import Counter

def are_arrays_equal(nums1, nums2):
    return Counter(nums1) == Counter(nums2)

nums1 = [1, 2, 3, 4]
nums2 = [4, 3, 2, 1]
nums3 = [1, 2, 2, 3]
nums4 = [1, 2, 3, 3]

print(are_arrays_equal(nums1, nums2))
print(are_arrays_equal(nums3, nums4))