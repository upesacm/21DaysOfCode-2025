def remove_element(nums, val):
    i = 0
    for num in nums:
        if num != val:
            nums[i] = num
            i += 1
    return i

nums = [3, 2, 2, 3]
val = 3
length = remove_element(nums, val)
print("New length after removal:", length)
