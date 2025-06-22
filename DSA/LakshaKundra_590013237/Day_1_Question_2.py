def find_missing_and_repeated(nums):
    n = len(nums)
    for i in range(1, n + 1):
        count = nums.count(i)  
        if count == 0:
            missing = i
        elif count == 2:
            repeated = i
    print("Missing:", missing)
    print("Twice:", repeated)
find_missing_and_repeated([3, 1, 3])
find_missing_and_repeated([4, 3, 6, 2, 1, 1])
