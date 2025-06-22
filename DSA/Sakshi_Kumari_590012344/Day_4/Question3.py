Your task:
Remove all occurrences of the given value and return the new length of the array.
def remove_element(nums, val):
    index = 0
    for num in nums:
        if num != val:
            nums[index] = num
            index += 1
    return index
