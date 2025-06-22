def missing_num(nums):
    num = [x for x in range(len(nums))]
    missing = 0
    for n in num:
        if n in nums:
            missing = n+1
        else:
            missing = n
            break
    return missing
        
print(missing_num([0,1])) #2
print(missing_num([0,1,3])) #2
print(missing_num([9, 6, 4, 2, 3, 5, 7, 0, 1])) #8
