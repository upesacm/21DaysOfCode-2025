def second_largest_number(nums):
    unique_nums = sorted(set(nums), reverse=True)  # removes duplicates and sort them in descending order
    return unique_nums[1] if len(unique_nums) > 1 else -1  # returns second largest element or -1 if not found

# Example :
nums = [10, 20, 30, 40, 50]
print(second_largest_number(nums))  # Output: 40