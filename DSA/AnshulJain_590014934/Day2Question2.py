def first_and_last(nums):
    return nums[0], nums[-1]

nums = [1, 2, 3, 4]
first, last = first_and_last(nums)
print(f"First: {first}, Last: {last}")
# output: First: 1, Last: 4