def count_frequencies(arr):
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    return freq

def are_arrays_equal(nums1, nums2):
    return count_frequencies(nums1) == count_frequencies(nums2)


print(are_arrays_equal([1, 2, 3, 4], [4, 3, 2, 1]))      
print(are_arrays_equal([1, 2, 2, 3], [1, 2, 3, 3]))      
print(are_arrays_equal([1, 2, 3], [1, 2, 3, 4]))          
