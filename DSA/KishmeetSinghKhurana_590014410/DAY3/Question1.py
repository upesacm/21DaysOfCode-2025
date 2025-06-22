import sys
def frequency(nums: list[int],k:int) -> int:
    freq: dict[int, int] = {}
    for num in nums:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    sum=0
    for num, count in freq.items():  
        if count == k:
            sum += num
    return sum        
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
    try:    
        k = int(input("Enter the value of k: "))
    except ValueError:
        print("Invalid value for k!")
        sys.exit(-1)
    sum  = frequency(nums, k)
    print(f"The sum of all distinct elements that appear exactly {k} times in the array is  {sum}")         
if __name__ == "__main__":
    main()
