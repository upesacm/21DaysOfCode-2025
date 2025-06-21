import sys


def longest_consecutive_chain(lst: list[int]) -> int:
    """Find the length of the longest
    consecutive increasing subarray."""

    longest_length = 1

    if lst:
        length = 1
        prev = lst[0]
        for i in lst[1:]:
            if i - prev == 1:
                length += 1
            else:
                length = 1

            longest_length = max(length, longest_length)
            prev = i

    return longest_length


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

    print(longest_consecutive_chain(nums))


if __name__ == "__main__":
    main()
