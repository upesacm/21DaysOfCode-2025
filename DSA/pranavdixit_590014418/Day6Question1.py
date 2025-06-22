def find_duplicate(nums):
    slow = nums[0]
    fast = nums[0]
    
    while True:
        slow = nums[slow]
        fast = nums[nums[fast]]
        if slow == fast:
            break

    slow = nums[0]
    while slow != fast:
        slow = nums[slow]
        fast = nums[fast]
    
    return slow

print("Duplicate:", find_duplicate([1, 3, 4, 2, 2]))
print("Duplicate:", find_duplicate([3, 1, 3, 4, 2]))
print("Duplicate:", find_duplicate([1, 1, 2]))
