
Problem 3: Sum of Array Elements

Problem Statement:
Given an array of integers, write a program that calculates and returns the sum of all elements in the array.

Input:
An array of integers.

Output:
The total sum of all elements in the array.

def sum_of_array(nums):
    total = 0
    for num in nums:
        total += num
    return total

# Test Cases
test_cases = [
    [1, 2, 3, 4, 5],
    [10, 20, 30],
    [7, 3, 9, 1, 6]
]

for case in test_cases:
    print("Input:", case)
    print("Output:", sum_of_array(case))
    print()
