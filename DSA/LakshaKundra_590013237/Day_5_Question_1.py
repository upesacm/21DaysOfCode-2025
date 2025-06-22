def singleNumber(nums):
    count = {}
    for num in nums:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1
    for num in count:
        if count[num] == 1:
            return num
print(singleNumber([2, 2, 1]))       
print(singleNumber([4, 1, 2, 1, 2])) 
print(singleNumber([1]))
