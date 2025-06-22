def is_palindrome(nums: list[int]) -> bool:
    left, right = 0, len(nums) - 1
    while left < right:
        if nums[left] != nums[right]:
            return False
        left += 1
        right -= 1
    return True
  # or return nums == nums[::-1]  (Alternative) 
def main() -> None:
    try:
        n = int(input("Enter the size of the array: "))
    except ValueError:
        print("Invalid size!")
        return
    if n < 0:
        print("Size must be non-negative.")
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
    print(f"Output:{is_palindrome(nums)}")

if __name__ == "__main__":
    main()