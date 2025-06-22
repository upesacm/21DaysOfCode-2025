def replace_negatives_with_zero(nums):
    for i in range(len(nums)):
        if nums[i] < 0:
            nums[i] = 0
    return nums


print(replace_negatives_with_zero([-1, 2, -3, 4, 5])) 
