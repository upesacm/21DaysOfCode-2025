import sys


def find_minimum(lst: list[int]) -> int | None:
    "Finds the minimum value element from the list."

    # Could use the `min` function here

    if not lst:
        return None

    minimum = lst[0]
    for i in lst:
        if i < minimum:
            minimum = i

    return minimum


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

    # For 'k'
    try:
        k = int(input("Enter the number of elements to shift: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    # Check if k is valid
    if not 0 <= k <= n:
        print(f"Number must be between 1 and {n} (inclusive).")
        sys.exit(-1)

    minimum = find_minimum(nums)

    print(minimum)


if __name__ == "__main__":
    main()
