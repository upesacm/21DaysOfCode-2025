def singleNumber(numberss):
    for i in numberss:
        if numberss.count(i) == 1:
            return i

nums_array = input("Enter numbers separated by spaces: ")
numbers = list(map(int, nums_array.split()))

# Find and print the result
result = singleNumber(numbers)
print("The number that appears only once is:", result)
