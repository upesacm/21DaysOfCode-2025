def k_frequency_element_sum(nums, k):
    freq = {}  
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    result = 0
    for num, count in freq.items():
        if count == k:
            result += num

    return result
print(k_frequency_element_sum([2, 3, 9, 9], 1))  
print(k_frequency_element_sum([1, 8, 8, 8, 5, 6, 2], 3))  
