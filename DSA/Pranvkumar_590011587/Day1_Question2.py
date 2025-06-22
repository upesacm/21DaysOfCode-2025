def find_missing_and_repeated(array):
    n = len(array)
    num_count = [0] * (n + 1)
    for num in array:
        num_count[num] += 1

    missing = repeated = -1
    for i in range(1, n + 1):
        if num_count[i] == 0:
            missing = i
        elif num_count[i] == 2:
            repeated = i

    return missing, repeated

# Example :
arr1 = [3, 1, 3]
missing, repeated = find_missing_and_repeated(arr1)
print(f"Missing: {missing}, Twice: {repeated}")

arr2 = [4, 3, 6, 2, 1, 1]
missing, repeated = find_missing_and_repeated(arr2)
print(f"Missing: {missing}, Twice: {repeated}")