#Determine if the array is a palindrome and return true or false.
nums=list(map(int,input("enter list with space :").split()))
reverse_nums=nums[:]
reverse_nums.reverse()
if reverse_nums==nums:
    print(True)
else:
    print(False)
