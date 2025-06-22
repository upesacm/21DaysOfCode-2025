def is_strictly_increasing(nums: list[int]) -> bool:
    for i in range(1, len(nums)):
        if nums[i] <= nums[i - 1]:
            return False
    return True

def main() -> None:
    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        return
    if n < 1:
        print("Size must be at least 1.")
        return
    nums = []
    print("<--Enter the values-->")
    for _ in range(n):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            return
        nums.append(num)
    result = is_strictly_increasing(nums)
    print(f"Is the array strictly increasing? {result}")

if __name__ == "__main__":
    main()