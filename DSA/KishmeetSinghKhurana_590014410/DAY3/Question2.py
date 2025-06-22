import sys
def frequency(nums: list[int]) -> dict[int, int]:
    freq: dict[int, int] = {}
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    return freq
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
    freq = frequency(nums)
    for num, count in freq.items():  
        if count > 1:
         print("true")
         return 
    print("false")         
if __name__ == "__main__":
    main()
