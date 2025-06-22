#Find one duplicate number that appears in the array.
nums=list(map(int,input("enter list with space :").split()))
count={}
for num in nums:
    if num in count:
        count[num]=count[num]+1
    else:
        count[num]=1

for num,duplicate in count.items():
    if duplicate ==2:
        print(num)
