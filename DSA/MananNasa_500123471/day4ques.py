Numbers = input("Enter numbers separated by spaces: ")

numbers_to_list = list(map(int, Numbers.split()))

minimum_value = numbers_to_list[0]

for i in numbers_to_list[1:]:
    if i < minimum_value:
        minimum_value = i

print("The minimum value is:", minimum_value)
