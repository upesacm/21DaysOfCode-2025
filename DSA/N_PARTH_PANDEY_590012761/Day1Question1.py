def replace_negatives_with_zero(nums):
    for i in range(len(nums)):
        if nums[i] < 0:
            nums[i] = 0

def print_array(nums):
    for num in nums:
        print(num, end=' ')
    print()

def main():
    nums1 = [-1, 2, -3, 4, 5]
    replace_negatives_with_zero(nums1)
    print_array(nums1)

    nums2 = [0, -5, -10]
    replace_negatives_with_zero(nums2)
    print_array(nums2)

    nums3 = [1, 2, 3, 4]
    replace_negatives_with_zero(nums3)
    print_array(nums3)

if __name__ == "__main__":
    main()
