#find duplicate value
nums = list(map(int, input("Enter the elements of array separated by space: ").split()))
def find_duplicate(nums):
    for i in nums:
        if nums.count(i)>1:
            return i
print(find_duplicate(nums))