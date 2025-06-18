def k_frequency_element_sum(nums, k):
    freq = {}
    for num in nums:
        freq[num] = freq.get(num, 0) + 1
    result = sum(num for num in freq if freq[num] == k)
    return result

nums = [1, 8, 8, 8, 5, 6, 2]
k = 3
print(k_frequency_element_sum(nums, k)) 
