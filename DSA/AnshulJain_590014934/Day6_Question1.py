def find_duplicate(nums):
    slow = fast = nums[0]
    while True:
        slow, fast = nums[slow], nums[nums[fast]]
        if slow == fast:
            break
    slow = nums[0]
    while slow != fast:
        slow, fast = nums[slow], nums[fast]
    return slow
print(find_duplicate([1, 3, 4, 2, 2]))  
# Output: 2