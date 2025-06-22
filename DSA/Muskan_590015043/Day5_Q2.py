nums = list(map(int,input("Enter the array of numbers: ").split()))
def missing(l):
    for i in range(len(l)+1):
        if i not in l:
            return(i)
print(missing(nums))