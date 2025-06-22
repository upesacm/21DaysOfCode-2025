def rotate_array(nums: list[int], k: int) -> list[int]:
    n = len(nums)
    if n == 0:
        return []
    k = k % n 
    return nums[-k:] + nums[:-k]

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
    try:
        k = int(input("Enter the value of k: "))
    except ValueError:
        print("Invalid value for k!")
        return
    rotated = rotate_array(nums, k)
    print(f"The rotated array is: {rotated}")

if __name__ == "__main__":
    main()