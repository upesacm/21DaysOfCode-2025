def find(arr):
    n = len(arr)
    total = sum(arr)
    unique_sum = sum(set(arr))
    expected = n * (n + 1) // 2

    repeated = total - unique_sum
    missing = expected - unique_sum

    print("Missing:", missing, ", Twice:", repeated)

#example
    find([3, 1, 3])