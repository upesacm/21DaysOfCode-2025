def find_duplicate_number(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)

#example
nums = [1, 3, 4, 5, 5]
print(find_duplicate_number(nums))#output=5