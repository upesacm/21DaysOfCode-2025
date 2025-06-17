import sys
def arrays_equal(nums1: list[int], nums2: list[int]) -> bool:
    if len(nums1) != len(nums2):
        return False
    freq1 = {}
    freq2 = {}
    for num in nums1:
        freq1[num] = freq1.get(num, 0) + 1
    for num in nums2:
        freq2[num] = freq2.get(num, 0) + 1
    return freq1 == freq2
def main() -> None:
    try:
        n1 = int(input("Enter the size of the first array: "))
        n2 = int(input("Enter the size of the second array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)
    # Check if length is valid
    if n1 <= 0 or n2 <= 0:
        print("Size must be greater 0.")
        sys.exit(-1)
    nums1: list[int] = []
    nums2: list[int] = []
    print("<--Enter the values for the first array-->")
    for _ in range(n1):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)
        nums1.append(num)
    print("<--Enter the values for the second array-->")
    for _ in range(n2):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)
        nums2.append(num)
    print("Output:", arrays_equal(nums1, nums2))  

if __name__ == "__main__":
    main()