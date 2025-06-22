def k_frequency_element_sum(nums, k):
    frequency_map = {}
    
    for num in nums:
        frequency_map[num] = frequency_map.get(num, 0) + 1
    
    result = 0
    for num, freq in frequency_map.items():
        if freq == k:
            result += num
    
    return result

print(k_frequency_element_sum([1, 2, 5, 5, 5], 3)) #5