nums = list(map(int,input("Enter the array of numbers: ").split()))
def unique_char(num):
    for i in num:
        if num.count(i) == 1:
            return i
print(unique_char(nums))
