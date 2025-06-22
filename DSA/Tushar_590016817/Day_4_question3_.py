def remove_element(nums, val):
    j = 0  # Pointer to keep track of valid elements
    for i in range(len(nums)):
        if nums[i] != val:
            nums[j] = nums[i]
            j += 1
    return j  # New length of the array

nums1 = [3, 2, 2, 3]
length1 = remove_element(nums1, 3)
print(length1)         # Output: 2
print(nums1[:length1]) # Modified array: [2, 2]

nums2 = [0, 1, 2, 2, 3, 0, 4, 2]
length2 = remove_element(nums2, 2)
print(length2)         # Output: 5
print(nums2[:length2]) # Modified array: [0, 1, 3, 0, 4]

nums3 = [1, 1, 1]
length3 = remove_element(nums3, 1)
print(length3)         # Output: 0
print(nums3[:length3]) # Modified array: []
