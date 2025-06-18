#Return true if any value appears more than once, otherwise return false.

nums=list(map(int,input("enter your list with space :").split()))
nums.sort()
# a little logical approach
count={}
for num in nums:
    if num in count:
        count[num]=count[num]+1
    else:
        count[num]=1

sol=False
for num in count :
    if count[num]>1:
        sol=True
        break
    
        
print (sol)


# there is a easier way also
print(len(nums) != len(set(nums)))
