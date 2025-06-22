#Find and return the element that appears only once in the array.
nums=list(map(int,input("enter list with space :").split()))
for num in nums:
    if nums.count(num)==1:
        print(num)
