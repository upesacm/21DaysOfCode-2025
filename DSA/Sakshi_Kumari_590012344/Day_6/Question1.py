Your task:
Find one duplicate number that appears in the array.

def findDuplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)
