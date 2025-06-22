def missing_number(nums: list[int]) -> int:
    n = len(nums)
    expected_sum = n * (n + 1) // 2  
    actual_sum = sum(nums)
    return expected_sum - actual_sum

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
    missing = missing_number(nums)
    print(f"Output: {missing}")

if __name__ == "__main__":
    main()