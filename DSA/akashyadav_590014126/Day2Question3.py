from collections import Counter

def check_if_arrays_equal(nums1, nums2):
    return Counter(nums1) == Counter(nums2)

# Example usage:
nums1 = [11, 32, 33, 44]
nums2 = [44, 32, 22, 11]
print(check_if_arrays_equal(nums1, nums2))  # Output: False