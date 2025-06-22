def sum_of_even_numbers():
    n = int(input("Enter the number of elements: "))
    nums = list(map(int, input("Enter the numbers separated by space: ").split()))
    
    if len(nums) != n:
        print("Error: Number of elements does not match the input n.")
        return
    
    even_sum = sum(num for num in nums if num % 2 == 0)
    print("Sum of even numbers:", even_sum)


sum_of_even_numbers()
