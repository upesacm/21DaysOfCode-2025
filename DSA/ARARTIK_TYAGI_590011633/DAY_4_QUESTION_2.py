# Input: Array and k
nums = list(map(int, input("Enter the array elements (space-separated): ").split()))
k = int(input("Enter the number of steps to rotate: "))

n = len(nums)
k = k % n  # To handle cases where k > n

# Rotating the array
rotated = nums[-k:] + nums[:-k]
print("Rotated array:", rotated)