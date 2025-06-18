from collections import Counter

def sum_element_k_frequency(nums, k):
    freq_map = Counter(nums)  # Count the times number occurrs
    return sum(num for num, count in freq_map.items() if count == k)  # Suming up elements with k frequency

# Example:
nums = [2, 3, 9, 9]
k = 2
print(sum_element_k_frequency(nums, k))  # Output: 9