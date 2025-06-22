import sys


def has_duplicates(lst: list[int]) -> bool:
    "Checks if the list has duplicates."

    return any(lst.count(x) > 1 for x in lst)


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

    print(str(has_duplicates(nums)).lower())


if __name__ == "__main__":
    main()
