def sum_even_num(num):
    total = 0
    for num in num:
        if num % 2 == 0:
            total += num
    return total
num = list(map(int, input("Enter the elements of array").split()))
print("Sum of all even numbers in the array is", sum_even_num(num))
