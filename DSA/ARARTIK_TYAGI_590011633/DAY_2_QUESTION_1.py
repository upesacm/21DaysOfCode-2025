nums = list(map(int, input("enter the array elements seprated by space: ").split()))

even_sum = sum(num for num in nums if num % 2 == 0)

print("sum of all even numbers: ", even_sum)