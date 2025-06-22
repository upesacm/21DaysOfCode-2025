def single_number(nums: list[int]) -> int:
    result = 0
    for num in nums:
        result ^= num 
    return result

def main() -> None:
    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        return
    if n <= 0:
        print("Size must be greater than 0.")
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
    unique = single_number(nums)
    print(f"Output: {unique}")

if __name__ == "__main__":
    main()