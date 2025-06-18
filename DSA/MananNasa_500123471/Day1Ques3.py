# Ask the user to enter array elements
arr = input("Enter the array elements separated by spaces: ")

# Convert the input string into a list of integers
arr = list(map(int, arr.split()))

# Calculate the sum
total = 0
for num in arr:
    total += num

# Print the result
print("Sum of array elements:", total)
