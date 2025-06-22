nums = input("Enter numbers separated by spaces: ").split()
nums = [int(num) for num in nums]
nums = list(set(nums))  

if len(nums) < 2:
    print(-1)
else:
    nums.sort()                        
    print(nums[-2]) 

    
