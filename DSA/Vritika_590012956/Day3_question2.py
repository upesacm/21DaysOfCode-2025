def contains_duplicate(nums):
    visited = set()  
    for num in nums:
        if num in visited:
            return True 
        visited.add(num)  
    return False  

nums = input("Enter numbers separated by spaces: ").split()
nums = [int(num) for num in nums]

if contains_duplicate(nums):
    print("True")
else:
    print("False")
