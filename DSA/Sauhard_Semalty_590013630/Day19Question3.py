import sys


def binary_search_matrix(matrix: list[list[int]], target: int) -> bool:
    "Checks if an element is in a 2D matrix using binary search."

    m, n = len(matrix), len(matrix[0])
    left = 0
    right = m * n - 1

    while left <= right:
        mid = (left + right) // 2
        value = matrix[mid // n][mid % n]

        if value == target:
            return True
        elif value < target:
            left = mid + 1
        else:
            right = mid - 1

    return False


def main() -> None:
    "The entry point of the program."

    try:
        n = int(input("Enter the number of rows: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)

    # Check if length is valid
    if n <= 0:
        print("Size must be greater than 0.")
        sys.exit(-1)

    nums: list[list[int]] = []

    print("+--Enter comma separated values--+")
    for _ in range(n):
        try:
            values = list(map(lambda s: int(s.strip()), (x for x in input("> ").split(",") if x)))
        except ValueError:
            print("Invalid values!")
            sys.exit(-1)

        if len(values) == 0:
            print("Empty rows are not allowed!")
            sys.exit(-1)

        if nums and len(values) < len(nums[0]):
            print("Length of rows must be the same.")
            sys.exit(-1)

        nums.append(values)

    # For 'target'
    try:
        target = int(input("Enter the value to search: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    print(binary_search_matrix(nums, target))


if __name__ == "__main__":
    main()
