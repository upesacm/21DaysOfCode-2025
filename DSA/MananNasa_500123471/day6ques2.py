n = int(input("Enter the length of the array: "))
num_array = []

for i in range(n):
    number = int(input("Enter a number: "))
    num_array.append(number)

sort_num_array = sorted(num_array)

if sort_num_array == num_array and len(set(num_array)) == len(num_array):
    print("True")
else:
    print("False")
