def strictly_increasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False
    return True

#example
nums=[4, 5, 6, 7]
print(strictly_increasing(nums))#output=true