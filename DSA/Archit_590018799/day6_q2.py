#Return true if the array is strictly increasing, otherwise return false. 
nums=list(map(int,input("enter list with space :").split()))
n= min(nums)
m=len(nums)+n
check_arr=list(range(n,m))

if nums==check_arr:
    print(True)
else:
    print(False)
