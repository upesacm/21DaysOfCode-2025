import sys


def missing_number_from_range(lst: list[int], n: int) -> int:
    """Finds the missing element from the list containing
    numbers from 0 to n."""

    real_sum = n*(n + 1) // 2  # Arithmetic progression formula

    return real_sum - sum(lst)


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

    print(f"+--Enter the numbers between 0 to {n} with one missing--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    print(missing_number_from_range(nums, n))


if __name__ == "__main__":
    main()
