def k_frequency_element_sum(nums, k):
    freq = {}
    for num in nums:
        freq[num] = freq.get(num, 0) + 1
    return sum(num for num, count in freq.items() if count == k)

nums = [2, 3, 9, 9]
k = 1
print(k_frequency_element_sum(nums, k))
# output: 5