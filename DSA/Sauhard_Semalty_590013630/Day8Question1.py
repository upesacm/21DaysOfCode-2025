import sys


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    lowercase = string.lower()
    uppercase = string.upper()
    length = len(string)

    print(f"Length: {length}, Original: {string!r}, "
          f"Uppercase: {uppercase!r}, Lowercase: {lowercase!r}")


if __name__ == "__main__":
    main()
