import sys


def unique_element(lst: list[int]) -> int | None:
    """Finds the unique element from the list containing
    other elements twice."""

    # This assumes that other elements appear exactly twice
    # and there is only one element that appears once.
    for x in lst:
        if lst.count(x) == 1:
            return x

    return None


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

    print(unique_element(nums))


if __name__ == "__main__":
    main()
