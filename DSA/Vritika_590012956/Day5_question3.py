nums = input("Enter the array elements separated by spaces: ").split()
nums = [int(num) for num in nums]

reversed_nums = list(reversed(nums))
if nums == reversed_nums:
    print("The array is a palindrome.")
else:
    print("The array is not a palindrome.")
