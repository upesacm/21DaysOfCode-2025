import sys
def second_largest(nums: list[int]) -> int:
    unique = list(set(nums))
    if len(unique) < 2:
        return -1
    unique.sort(reverse=True)#sort in descending order
    return unique[1]
def main() -> None:
    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)
    if n <= 0:
        print("Size must be greater 0.")
        sys.exit(-1)
    nums: list[int] = []
    print("<--Enter the values-->")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)
        nums.append(num)
    print("Output:", second_largest(nums))
if __name__ == "__main__":
    main()