#Find the missing number from the sequence 0 to n. 
nums=list(map(int,input("enter list with space :").split()))
n=len(nums)
expected_sum=n*(n+1)/2
sum=0
for num in nums:
    sum=sum+num

Missing_no = expected_sum - sum
print(int(Missing_no))
