n = int(input("Enter the number of elements in the array: "))

# Empty list to store numbers
nums = []
# Taking input one by one
for i in range(n):
    num = int(input(f"Enter element {i+1}: "))
    nums.append(num)
for i in range(n):
    if nums[i] < 0:
        nums[i] = 0
print("Modified array:", nums)
