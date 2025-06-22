def k_frequency_element_sum(nums, k):
    freq = {}

   
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1

    
    total = 0
    for num in freq:
        if freq[num] == k:
            total += num

    return total
print(k_frequency_element_sum([10, 10, 20, 30, 30, 30], 1)) 
print(k_frequency_element_sum([9, 9, 9, 9], 4))             

