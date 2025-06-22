import sys

def find_minimum(nums: list[int]) -> int:
    minimum = nums[0]
    for num in nums[1:]:
        if num < minimum:
            minimum = num
    return minimum    
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
    
    minimum = find_minimum(nums)
    print(f"The minimum element in the array is {minimum}")
    
if __name__ == "__main__":
    main()
