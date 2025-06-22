from collections import Counter

def are_arrays_equal():
    n1 = int(input("Enter the number of elements in first array: "))
    nums1 = list(map(int, input("Enter the elements of first array: ").split()))

    n2 = int(input("Enter the number of elements in second array: "))
    nums2 = list(map(int, input("Enter the elements of second array: ").split()))

    if len(nums1) != n1 or len(nums2) != n2:
        print("Error: Element count does not match the specified size.")
        return

    result = Counter(nums1) == Counter(nums2)
    print("Are the arrays equal?", result)

are_arrays_equal()
