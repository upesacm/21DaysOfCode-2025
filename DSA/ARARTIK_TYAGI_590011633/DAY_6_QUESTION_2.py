def is_strictly_increasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i-1]:
            return False
    return True

# User Input
nums = list(map(int, input("Enter array to check for strict increase (space-separated): ").split()))
print("Is strictly increasing:", is_strictly_increasing(nums))