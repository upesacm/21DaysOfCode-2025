import sys
def replace_negatives(lst: list[int]) -> None:
    for index, value in enumerate(lst):
        if value < 0:
            lst[index] = 0
def main() -> None:
    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        sys.exit(-1)
    # Check if length is valid
    if n <= 0:
        print("Size must be greater than 0.")
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
    replace_negatives(nums) 
    print("Output:", nums)
if __name__ == "__main__":
    main()
