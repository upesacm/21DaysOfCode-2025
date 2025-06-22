# Input: Array and value to remove
nums = list(map(int, input("Enter the array elements (space-separated): ").split()))
val = int(input("Enter the value to remove: "))

# Removing occurrences
filtered = [x for x in nums if x != val]
print("New length after removals:", len(filtered))
print("Array after removing the value:", filtered)