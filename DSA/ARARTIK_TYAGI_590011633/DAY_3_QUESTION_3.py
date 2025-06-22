# User input
nums = list(map(int, input("Enter the array elements separated by space: ").split()))

# Convert to a set to get unique elements
unique_nums = list(set(nums))

# Check if there are at least two unique elements
if len(unique_nums) < 2:
    print("Output: -1")
else:
    unique_nums.sort(reverse=True)
    print("Output:", unique_nums[1])