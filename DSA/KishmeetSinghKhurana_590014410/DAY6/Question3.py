def longest_consecutive_increasing_subarray(nums: list[int]) -> int:
    if not nums:
        return 0
    max_len = 1
    curr_len = 1
    for i in range(1, len(nums)):
        if nums[i] == nums[i - 1] + 1:
            curr_len += 1
            max_len = max(max_len, curr_len)
        else:
            curr_len = 1
    return max_len

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
    result = longest_consecutive_increasing_subarray(nums)
    print(f"Length of the longest consecutive increasing subarray: {result}")

if __name__ == "__main__":
    main()