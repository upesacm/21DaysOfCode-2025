nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
sum = 0
for i in nums:
    sum+=i
total = 0
for i in range(len(nums)+1):
    total+=i
print(total-sum)
