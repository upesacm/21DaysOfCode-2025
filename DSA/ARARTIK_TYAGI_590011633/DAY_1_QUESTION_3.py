def sum_of_array(nums):
    return sum(nums)

#User Input
nums = list(map(int, input("Enter numbers to sum, separated by space: ").split()))
total = sum_of_array(nums)
print("sum of elements:", total)