import sys
def sum_array(arr: list[int]) -> int:
    total = 0
    for num in arr:
        total += num
    return total
def main() -> None:
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
    print("<--Enter the values-->")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            sys.exit(-1)
        nums.append(num)
    print("Output:", sum_array(nums))  # Print the sum of the array
if __name__ == "__main__":
    main()
