
def sum_even(nums):
    total=0
    for num in nums:
        if (num%2==0):
            total+=num
    return total        
            
    
nums=[1,2,4,5,6,75]
nums2=[10,20,30]
result2=sum_even(nums2)
print(result2)
result=sum_even(nums)
print(result)
            
