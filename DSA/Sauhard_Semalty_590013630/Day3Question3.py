import sys


def second_largest(lst: list[int]) -> int:
    "Finds the second largest element from the list."

    lst = sorted(lst)

    match len(lst):
        case 0:
            return -1
        case 1:
            return lst[0]
        case _:
            return lst[-2]


def get_uniques(lst: list[int]) -> list[int]:
    "Gets unique elements from the list"

    return [x for x in lst if lst.count(x) == 1]


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

    print("+--Enter the values (positive only)--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        if num < 0:
            print("Only positive values are allowed.")
            sys.exit(-1)

        nums.append(num)

    print(second_largest(get_uniques(nums)))


if __name__ == "__main__":
    main()
