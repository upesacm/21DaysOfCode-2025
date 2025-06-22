import sys


def find_frequency_k(lst: list[int], k: int) -> int:
    "Finds the sum of elements that appears 'k' times in the list."

    return sum(set(x for x in lst if lst.count(x) == k))


def main() -> None:
    "The entry point of the program."

    # For 'k'
    try:
        k = int(input("Enter the frequency: "))
    except ValueError:
        print("Invalid frequency!")
        sys.exit(-1)

    # Check if frequency is valid
    if k <= 0:
        print("Frequency must be greater 0.")
        sys.exit(-1)

    # For numbers
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

    nums: list[int] = []

    print("+--Enter the values--+")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)

        nums.append(num)

    result = find_frequency_k(nums, k)

    print(result)


if __name__ == "__main__":
    main()
