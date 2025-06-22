import sys


def is_increasing_list(lst: list[int]) -> bool:
    """Checks if each element is greater than
    the previous element from the list."""

    if lst:
        prev = lst[0]
        for i in lst[1:]:
            if i <= prev:
                return False

            prev = i

    return True


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

    print(str(is_increasing_list(nums)).lower())


if __name__ == "__main__":
    main()
