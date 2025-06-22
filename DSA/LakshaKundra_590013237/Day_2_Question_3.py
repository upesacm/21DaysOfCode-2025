def are_arrays_equal(nums1, nums2):
    return sorted(nums1) == sorted(nums2)
print(are_arrays_equal([1, 2, 3, 4], [4, 3, 2, 1]))  
print(are_arrays_equal([1, 2, 2, 3], [1, 2, 3, 3]))  
print(are_arrays_equal([1, 2, 3], [1, 2, 3, 4]))     
