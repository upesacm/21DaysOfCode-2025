def first_and_last(nums):
    if not nums:
        return None, None  # Optional: handle empty list edge case
    return nums[0], nums[-1]

# Example usage:
print("First: {}, Last: {}".format(*first_and_last([1, 2, 3, 4])))  # First: 1, Last: 4
print("First: {}, Last: {}".format(*first_and_last([7])))          # First: 7, Last: 7
print("First: {}, Last: {}".format(*first_and_last([5, 9, 2])))    # First: 5, Last: 2
