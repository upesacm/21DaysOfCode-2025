#INPUT ARRAY
size = int(input("Enter the number of elements in the array: "))
nums = [] #Initialise empty list
for i in range(size):
    nums.append(int(input()))
first = nums[0]
last = nums[len(nums)-1]
print(f"First: {first}, Last: {last}")