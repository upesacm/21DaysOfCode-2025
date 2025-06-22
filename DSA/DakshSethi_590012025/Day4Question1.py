nums = list(map(int, input("enter number").split()))
def find_minimum(nums):
    minimum = nums[0]
    for num in nums:
        if num < minimum:
            minimum = num
    return minimum

print("minimum element is:", find_minimum(nums))
