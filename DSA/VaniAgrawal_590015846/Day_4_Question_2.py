#Rotate the array to the right by k steps and return the rotated array.
nums=list(map(int,input("enter list with space :").split()))
k= int(input("enter by  how many values you want to rotate :"))
i=1
while i<=k:
    last_no=nums[-1]
    nums.insert(0,last_no)
    nums.pop()
    i=i+1

    
print(nums)
