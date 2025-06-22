def remove_element(nums, val):
    i = 0
    for j in range(len(nums)):
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i
print("\nRemove Element Tests:")
nums1 = [3, 2, 2, 3]
new_len1 = remove_element(nums1, 3)
print(new_len1)                           # Output: 2

nums2 = [0, 1, 2, 2, 3, 0, 4, 2]
new_len2 = remove_element(nums2, 2)
print(new_len2)                           # Output: 5

nums3 = [1, 1, 1]
new_len3 = remove_element(nums3, 1)
print(new_len3)                           # Output: 0