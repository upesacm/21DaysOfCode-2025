nums = list(map(int, input("Enter the array elements seprated by space: ").split()))

if nums:
    print("First:", nums[0])
    print("Last:", nums[-1])
else:
    print("Array is empty.")