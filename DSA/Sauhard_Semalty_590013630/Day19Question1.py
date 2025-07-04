import sys


def custom_binary_search(nums: list[int], target: int) -> int:
    """Searches the target in the list using a
    modified binary search approach."""

    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid

        if nums[left] <= nums[mid]:
            if nums[left] <= target < nums[mid]:
                right = mid - 1  # Search left
            else:
                left = mid + 1  # Search right
        else:
            if nums[mid] < target <= nums[right]:
                left = mid + 1  # Search right
            else:
                right = mid - 1  # Search left

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
        print("Size must be greater than 0.")
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

    # For 'target'
    try:
        target = int(input("Enter the value to search: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    print(custom_binary_search(nums, target))


if __name__ == "__main__":
    main()
