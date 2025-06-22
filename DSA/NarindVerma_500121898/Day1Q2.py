def find_missing_and_repeated(nums):
    n = len(nums)
    num_set = set()
    repeated = -1
    total = sum(range(1, n+1))
    actual_sum = 0

    for num in nums:
        if num in num_set:
            repeated = num
        else:
            num_set.add(num)
            actual_sum += num

    missing = total - actual_sum
    return missing, repeated
