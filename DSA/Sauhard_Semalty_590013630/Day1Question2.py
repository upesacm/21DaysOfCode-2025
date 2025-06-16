import sys


def find_missing_and_twice(lst: list[int]) -> tuple[int | None, int | None]:
    "Finds missing number and the number that appears twice."

    missing = None
    twice = None

    for i in range(1, len(lst) + 1):
        if lst.count(i) == 0:
            missing = i
        elif lst.count(i) == 2:
            twice = i

    return missing, twice


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

        if not 1 <= num <= n:
            print(f"Number must be between 1 and {n} (inclusive).")
            sys.exit(-1)

        nums.append(num)

    # Assuming there is at max one missing number
    # and one number that appeared twice
    missing, twice = find_missing_and_twice(nums)

    print(f"Missing: {missing}, Twice: {twice}")


if __name__ == "__main__":
    main()
