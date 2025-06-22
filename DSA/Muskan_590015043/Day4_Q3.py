nums = list(map(int,input("Enter the array elements (space seperated): ").split()))
val = int(input("Enter the value: "))
if val not in nums:
    print(len(nums))
else:
    for i in range(nums.count(val)):
        nums.remove(val)
    print(len(nums))