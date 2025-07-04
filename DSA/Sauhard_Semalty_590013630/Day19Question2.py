import sys

def peak_element(nums: list[int]) -> int:
    "Finds a peak element in the list."

    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = (left + right) // 2
        left_smaller = mid == 0 or nums[mid - 1] < nums[mid]
        right_smaller = mid == len(nums) - 1 or nums[mid + 1] < nums[mid]

        if left_smaller and right_smaller:
            return mid

        if left_smaller:
            left = mid + 1
        else:
            right = mid - 1

    return -1


def main() -> None:
    "The entry point of the program."

    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)

    # Check if length is valid
    if n <= 0:
        print("Size must be greater 0.")
        sys.exit(-1)

    nums: list[int] = []

    print("+--Enter the values--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    print(peak_element(nums))


if __name__ == "__main__":
    main()
