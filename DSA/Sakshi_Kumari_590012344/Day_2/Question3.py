from collections import Counter

def are_arrays_equal(arr1, arr2):
    return Counter(arr1) == Counter(arr2)
