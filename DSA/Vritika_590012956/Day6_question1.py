def findDuplicate(nums):
    # Finding the intersection point of the two runners.
    slow = nums[0]
    fast = nums[0]

    # Move slow by 1 step and fast by 2 steps until they meet
    while True:
        slow = nums[slow]
        fast = nums[nums[fast]]
        if slow == fast:
            break

    # Phase 2: Finding (duplicate number)
    slow = nums[0]
    while slow != fast:
        slow = nums[slow]
        fast = nums[fast]

    return slow


nums = list(map(int, input("Enter the array elements separated by spaces: ").split()))
duplicate = findDuplicate(nums)
print("Duplicate number is:", duplicate)
