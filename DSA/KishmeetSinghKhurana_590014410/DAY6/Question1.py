def find_duplicate(nums: list[int]) -> int:
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)
    return -1  # Should not happen as per problem constraints

def main() -> None:
    try:
        n = int(input("Enter n (array will have n+1 elements): "))
    except ValueError:
        print("Invalid size!")
        return
    if n < 1:
        print("n must be at least 1.")
        return
    nums = []
    print(f"<--Enter {n+1} values between 1 and {n}-->")
    for _ in range(n+1):
        try:
            num = int(input("> "))
        except ValueError:
            print("Invalid value!")
            return
        nums.append(num)
    duplicate = find_duplicate(nums)
    print(f"One duplicate number is: {duplicate}")

if __name__ == "__main__":
    main()