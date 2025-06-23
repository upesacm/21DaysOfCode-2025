"""
1. Bug: The variable 'max' is not initialized before being used in the comparison.
2. This can cause to return incorrect results, since 'max' may contain a garbage value.
3. Corrected function in Python :
"""
def find_max(arr):
    if not arr:
        raise ValueError("Array is empty")
    max_val = arr[0]
    for num in arr[1:]:
        if num > max_val:
            max_val = num
    return max_val

# Example:
numbers = [3, 7, 2, 9, 4]
print("The maximum value is:", find_max(numbers))
