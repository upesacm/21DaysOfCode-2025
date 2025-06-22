nums = [1, 8, 8, 8, 5, 6, 2]
nums.sort()
k = 3
total = 0

count = {}
for num in nums:
    if num in count:
        count[num] = count[num] + 1
    else:
        count[num] = 1

for num in count:
    if count[num] == k:
        total += num

print("sum =", total)
