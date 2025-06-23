import sys


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    # For character
    char = input("Enter a character: ")
    if not char:
        print("Character cannot be empty.")
    elif len(char) != 1:
        print("Only single byte characters are allowed.")
        sys.exit(-1)

    # Find the frequency of the character in the string
    # `str.count` should have been better here

    count = 0
    for c in string:
        if c == char:
            count += 1

    print(count)


if __name__ == "__main__":
    main()
