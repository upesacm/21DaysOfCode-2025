#Find the Second Largest Element
#INPUT ARRAY
size = int(input("Enter the number of elements in the array: "))
nums = [] #Initialise empty list
for i in range(size):
    nums.append(int(input()))
nums = set(nums)
max_num = max(nums)
nums.remove(max_num)

if not nums:
    print(-1)
else:
    sec_max = max(nums)
    print(sec_max)
    