#Remove all occurrences of the given value and return the new length of the array. 
nums=list(map(int,input("enter the numberin list with space:").split()))
val=int(input("enter the value you want to remove:"))
filtered_list=[]
for num in nums:
    if num!=val:
        filtered_list.append(num)
print(len(filtered_list))
