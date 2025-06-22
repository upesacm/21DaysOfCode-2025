#. K-Frequency Element Sum
#INPUT ARRAY
nums = list(map(int, input("Enter the elements of array separated by space: ").split()))
k = int(input("Enter the frequency: "))
sum = 0
new_set = set(nums) #distincts each value
for i in new_set:
    if nums.count(i) == k: #matches frequency
        sum += i
print(sum)