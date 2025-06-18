from collections import Counter

#user input
nums = list(map(int, input("Enter the array elements seprated by space: ").split()))
k = int(input("Enter the value of k: "))

# Frequency map
freq = Counter(nums)

#sum of elements that cums k times exactaly
result = sum(num for num, count in freq.items() if count == k)
print("Output:", result)