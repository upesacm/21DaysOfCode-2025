#. Check for Duplicates
#INPUT ARRAY
size = int(input("Enter the number of elements in the array: "))
nums = [] #Initialise empty list
for i in range(size):
    nums.append(int(input()))
diff = set(nums)
if len(diff) == len(nums):
    print("false")
else:
    print("true")