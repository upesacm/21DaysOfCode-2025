import sys


def is_palindrome(lst: list[int]) -> bool:
    "Checks if the list is palindrome or not"

    # return lst == lst[::-1]

    for index, value in enumerate(lst):
        if value != lst[-index - 1]:
            return False

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

    print(str(is_palindrome(nums)).lower())

if __name__ == "__main__":
    main()
