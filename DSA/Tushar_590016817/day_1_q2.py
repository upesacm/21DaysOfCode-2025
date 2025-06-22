def find_missing_and_repeated(nums):
    n = len(nums)
    num_count = [0] * (n + 1)  # Index 0 will be unused

    for num in nums:
        num_count[num] += 1

    missing = repeated = -1

    for i in range(1, n + 1):
        if num_count[i] == 0:
            missing = i
        elif num_count[i] == 2:
            repeated = i

    return f"Missing: {missing}, Twice: {repeated}"
print(find_missing_and_repeated([3,1,3]))
print(find_missing_and_repeated([4,3,6,2,1,1]))
