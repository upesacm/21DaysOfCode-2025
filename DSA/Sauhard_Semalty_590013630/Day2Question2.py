import sys


def find_first_last(lst: list[int]) -> tuple[int | None, int | None]:
    "Finds first and last elements of the list."

    return (lst[0], lst[-1]) if lst else (None, None)


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

    first, last = find_first_last(nums)

    print(f"First: {first}, Last: {last}")


if __name__ == "__main__":
    main()
