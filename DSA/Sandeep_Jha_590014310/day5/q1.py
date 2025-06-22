def unique_elem(nums):
    freq_counter = {}
    unique = 0
    for n in nums:
        freq_counter[n] = freq_counter.get(n,0) + 1
    
    for n,k in freq_counter.items():
        if k == 1:
            unique = n
    
    return unique


print(unique_elem([1,2,2])) #1
print(unique_elem([1,2,2,1,4])) #4