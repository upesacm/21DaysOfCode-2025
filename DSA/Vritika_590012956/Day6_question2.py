def is_strictly_increasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False  #  Breaks
    return True  # If it is strictly increasing


nums = input("Enter the array elements separated by spaces: ")

if nums.strip() == "":    # Empty case
    print("False")  # Empty sequence can't be strictly increasing
else:
    nums = list(map(int, nums.split())) 
    result = is_strictly_increasing(nums)
    print(result)
