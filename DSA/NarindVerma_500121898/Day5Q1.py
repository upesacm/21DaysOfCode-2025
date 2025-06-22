def unique_element(a):
    for i in a:
        if a.count(i) == 1:
            return i
    return None
print(unique_element([1, 2, 3, 2, 1, 4]))  # Output: 3
print(unique_element([1, 1, 2, 2, 3, 3, 4]))  # Output: 4