import sys


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    # Reverse a string
    rev = ""
    for c in string:
        rev = c + rev

    print(repr(rev))


if __name__ == "__main__":
    main()
