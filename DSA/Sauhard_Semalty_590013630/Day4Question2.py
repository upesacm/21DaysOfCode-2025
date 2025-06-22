import sys


def shift_rotate_right(lst: list[int], k: int) -> None:
    "Circular shifts the list to the right."

    for _ in range(k):
        last = lst.pop()
        lst.insert(0, last)


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
    if k <= 0:
        print("Number must be greater than 0.")
        sys.exit(-1)

    shift_rotate_right(nums, k)

    print(nums)


if __name__ == "__main__":
    main()
