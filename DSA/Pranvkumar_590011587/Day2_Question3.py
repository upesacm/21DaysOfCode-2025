from collections import Counter

def are_arrays_equal(nums1, nums2):
    return Counter(nums1) == Counter(nums2)

# Example :
nums1 = [1, 2, 3, 4]
nums2 = [4, 3, 2, 1]
print(are_arrays_equal(nums1, nums2))  