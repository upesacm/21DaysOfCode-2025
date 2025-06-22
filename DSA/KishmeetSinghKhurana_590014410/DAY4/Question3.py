def remove_element(nums: list[int], val: int) -> int:
    k = 0 
    for num in nums:
        if num != val:
            nums[k] = num
            k += 1
    return k

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
        val = int(input("Enter the value to remove: "))
    except ValueError:
        print("Invalid value!")
        return
    new_length = remove_element(nums, val)
    print(f"New length after removing {val}: {new_length}")
   # print(f"Array after removal: {nums[:new_length]}")

if __name__ == "__main__":
    main()