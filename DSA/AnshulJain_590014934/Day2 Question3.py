from collections import Counter

def are_equal(nums1, nums2):
    return Counter(nums1) == Counter(nums2)

nums1 = [1, 2, 3]
nums2 = [1, 2, 3, 4]
print(are_equal(nums1, nums2))
# output: False