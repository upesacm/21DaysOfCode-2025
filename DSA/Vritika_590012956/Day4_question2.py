nums = list(map(int, input("Enter the numbers separated by spaces: ").split()))
k = int(input("Enter the number of steps to rotate: "))

k = k % len(nums)
rotated = nums[-k:] + nums[:-k]
print("Rotated Array:", rotated)
