def print_first_and_last():
    nums = input("Enter numbers: ").split()

    if not nums:
        print("Array is empty")
    else:
        print("First:", nums[0], "Last:", nums[-1])

# Call the function
print_first_and_last()
