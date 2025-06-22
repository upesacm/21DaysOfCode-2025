def ispalindrome(nums):
    left, right = 0, len(nums) - 1
    while left < right:
        if nums[left] != nums[right]:
            return False
        left += 1
        right -= 1
    return True

def main():
    input_str = input("Enter the array elements \n")
    nums = list(map(int, input_str.strip().split()))

    print(ispalindrome(nums))

if __name__ == "__main__":
    main()
