#solution2
import numpy as np
count = 0
nums = np.array([4, 3, 6, 3, 5, 1])
arr = np.sort(nums)
add = 0
for i in arr:
    add = add + i
    for j in arr:
        if i == j:
            count = count+1
        if count == 2:
            repeat = i

sum = len(arr)*(len(arr)+1) // 2

missing = sum - add + repeat

print(f"repeat:{repeat},missing:{missing}")
