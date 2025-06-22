#Find the sum of all distinct elements that appear exactly k times in the array.
nums = list(map(int,input("enter the list of numbers with space :").split()))
nums.sort()
k=int(input("enter the value of k :"))
sum=0

count ={}
for num in nums:
    if num in count:
        count[num]=count[num]+1
    else:
        count[num]=1


for num in count:
    if count[num]== k:
        sum=sum+num
    

print(sum)  
