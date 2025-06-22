Your task:
Find the sum of all distinct elements that appear exactly k times in the array
def k_frequency_element_sum(nums, k):
    freq = {}
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    total = 0
    for num in freq:
        if freq[num] == k:
            total += num
    return total
