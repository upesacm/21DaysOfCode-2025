def check_duplicate(nums):
    frequency_map = {}
    for num in nums:
        frequency_map[num] = frequency_map.get(num, 0) + 1
    for num, freq in frequency_map.items():
        if freq > 1:
            return True
    return False

print(check_duplicate([1, 2, 3, 4, 5])) #False
print(check_duplicate([1, 2, 3, 4, 5, 1])) #True