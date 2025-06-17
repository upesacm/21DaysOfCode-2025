def count_frequencies(arr):
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    return freq

def are_arrays_equal(nums1, nums2):
    if len(nums1) != len(nums2):
        return False

    freq1 = count_frequencies(nums1)
    freq2 = count_frequencies(nums2)

    return freq1 == freq2
nums1 = [1, 2, 3, 4]
nums2 = [4, 3, 2, 1]
print(are_arrays_equal(nums1, nums2))
