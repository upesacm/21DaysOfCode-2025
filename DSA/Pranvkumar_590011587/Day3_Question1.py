from collections import Counter

def sum_of_Unique_nums_of_freq_k(nums,k):
    freq = Counter(nums)
    return sum(num for num, count in freq.items() if count == k)

# Example :
nums = [1, 2, 2, 4, 4]
k=2
result = sum_of_Unique_nums_of_freq_k(nums,k)
print(result)