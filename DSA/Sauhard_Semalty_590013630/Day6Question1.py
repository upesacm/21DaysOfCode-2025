import sys


def duplicate_number_from_range(lst: list[int], n: int) -> int:
    """Finds the duplicate element from the list containing
    numbers from 1 to n."""

    real_sum = n*(n + 1) // 2  # Arithmetic progression formula

    return sum(lst) - real_sum


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

    print(f"+--Enter {n + 1} numbers between 1 to {n} with one duplicate--+")
    for _ in range(n + 1):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        if not 0 <= num <= n:
            print(f"Number must be between 0 and {n} (inclusive).")
            sys.exit(-1)

        nums.append(num)

    print(duplicate_number_from_range(nums, n))


if __name__ == "__main__":
    main()
