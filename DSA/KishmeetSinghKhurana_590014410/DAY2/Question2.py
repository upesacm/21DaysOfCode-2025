import sys
def first_last(arr: list[int]) -> tuple[int | None, int | None]:
    first=arr[0] 
    last=arr[-1] 
    return first, last
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
    print(f"First:{first_last(nums)[0]} Last:{first_last(nums)[1]} ")  # Print the first and last elements    
    print()
if __name__ == "__main__":
    main()
