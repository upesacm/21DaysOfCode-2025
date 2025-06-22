def first_and_last():
    n = int(input("Enter the number of elements: "))
    nums = list(map(int, input("Enter the numbers separated by space: ").split()))

    if len(nums) != n:
        print("Error: Number of elements does not match the input n.")
        return

    print("First:", nums[0])
    print("Last:", nums[-1])


first_and_last()
