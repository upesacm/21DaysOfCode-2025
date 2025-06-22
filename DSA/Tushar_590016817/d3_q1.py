from collections import Counter

def k_frequency_element_sum(nums, k):
    freq = Counter(nums)  # Step 1: Count frequencies
    return sum(num for num, count in freq.items() if count == k)  # Step 2 & 3

# Example 1
nums1 = [2, 3, 9, 9]
k1 = 1
print(k_frequency_element_sum(nums1, k1))  # Output: 5

# Example 2
nums2 = [1, 8, 8, 8, 5, 6, 2]
k2 = 3
print(k_frequency_element_sum(nums2, k2))  # Output: 8
