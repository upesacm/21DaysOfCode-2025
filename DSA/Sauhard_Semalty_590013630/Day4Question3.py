import sys


def remove_value(lst: list[int], val: int) -> list[int]:
    "Removes the given value from the list."

    # list.remove would be more appropriate here
    new_list = []

    for i in lst:
        if i != val:
            new_list.append(i)

    return new_list


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

    # For 'val'
    try:
        k = int(input("Enter the value to be removed: "))
    except ValueError:
        print("Invalid number!")
        sys.exit(-1)

    nums = remove_value(nums, k)

    print(len(nums))


if __name__ == "__main__":
    main()
