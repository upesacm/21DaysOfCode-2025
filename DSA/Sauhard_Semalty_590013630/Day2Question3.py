import sys


def get_input_lst() -> list[int]:
    "Takes input from the user with validation"

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

    return nums


def main() -> None:
    "The entry point of the program."

    print("[Array 1]")
    lst1 = get_input_lst()

    print("[Array 2]")
    lst2 = get_input_lst()

    print(str(sorted(lst1) == sorted(lst2)).lower())


if __name__ == "__main__":
    main()
