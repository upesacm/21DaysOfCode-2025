def remove_element(nums, val):
    i = 0
    for num in nums:
        if num != val:
            nums[i] = num
            i += 1
    return i

nums = [1,1,1]
val = 1
print(remove_element(nums, val))
# # output: 0