Your task:
Find the second largest unique element in the array, or return -1 if it doesn’t exist.

def second_largest(nums):
    distinct_nums = set(nums)
    if len(distinct_nums) < 2:
        return -1  
    largest = max(distinct_nums)
    distinct_nums.remove(largest)
    return max(distinct_nums)
