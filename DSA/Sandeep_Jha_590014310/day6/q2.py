def check_order(nums):
    num = float("-inf")
    for n in nums:
        if num < n:
            num = n
        else:
            return False
        
    return True

print(check_order((1,2,4,3))) #False
print(check_order((1,2,2,3))) #True