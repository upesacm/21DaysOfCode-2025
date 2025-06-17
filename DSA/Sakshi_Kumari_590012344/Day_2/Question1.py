Your task: Calculate and return the sum of all even numbers in the array.
def sum_of_even_numbers(nums):
    total = 0
    for num in nums:
        if num % 2 == 0:
            total += num
    return total


