from collections import Counter

#input for first array
nums1 = list(map(int, input("Enter the elements of the first array:").split()))

#input for second array

nums2 = list(map(int, input("Enter the elements of the Second array:").split()))

are_equal = Counter(nums1) == Counter(nums2)

print("Arrays are equal" if are_equal else "Arrays are not equal.")
