def remove_the_element(nums, val):
    i = 0  # to pace the next element which is not equal to val
    for j in range(len(nums)):  # j finds through every element
        if nums[j] != val:
            nums[i] = nums[j]
            i += 1
    return i  # i is the new length of modified array after removing val

nums=[1,2,2,3,3,3,4,4,4,4]
val=4
removed = remove_the_element(nums,val)
print(removed)