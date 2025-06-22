def missing_number(a):
    n=len(a)
    for i in range(n+1):
        if i not in a:
            return i
    return -1 
print(missing_number([0, 1, 2, 3, 5]))  # Output: 4
print(missing_number([1, 2, 3, 4, 5]))  # Output: 0