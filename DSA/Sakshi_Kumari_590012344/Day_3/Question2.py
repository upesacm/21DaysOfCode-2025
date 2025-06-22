Your task:
Return true if any value appears more than once, otherwise return false.

def has_duplicates(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return True
        seen.add(num)
    return False
