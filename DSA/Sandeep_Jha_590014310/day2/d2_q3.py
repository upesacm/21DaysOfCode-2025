def are_arrays_equal(nums1: list[int], nums2: list[int]) -> bool:
    if len(nums1) != len(nums2):
        return False
    
    freq = {}
    for num in nums1:
        freq[num] = freq.get(num, 0) + 1
    
    for num in nums2:
        if num not in freq or freq[num] == 0:
            return False
        freq[num] -= 1
    
    # Check if all frequencies are zero
    return all(count == 0 for count in freq.values())

print(are_arrays_equal([1, 2, 3, 4], [4, 3, 2, 1])) # True
print(are_arrays_equal([1,2,2,3], [1,2,3,3])) # False