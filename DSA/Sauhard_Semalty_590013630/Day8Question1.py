import sys
import json


def main() -> None:
    "The entry point of the program."

    string = input("Enter string: ")
    if not string:
        print("Empty string is not allowed.")
        sys.exit(-1)

    lowercase = string.lower()
    uppercase = string.upper()
    length = len(string)

    # `repr` may produce different quotes, so `json.dumps` is used here
    print(f"Length: {length}, Original: {json.dumps(string)}, "
          f"Uppercase: {json.dumps(uppercase)}, Lowercase: {json.dumps(lowercase)}")


if __name__ == "__main__":
    main()
