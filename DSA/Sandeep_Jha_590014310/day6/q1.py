def find_dupe(nums):
    freq_counter = {}
    dupe = False
    for n in nums:
        freq_counter[n] = freq_counter.get(n,0) + 1
    
    for n,k in freq_counter.items():
        if k>1:
            dupe=n
    return dupe

print(find_dupe((1,2,2)))