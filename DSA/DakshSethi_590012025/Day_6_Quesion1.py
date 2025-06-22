def findDuplicates(nums):
    ans = []
    for num in nums:
        if nums[abs(num) - 1] < 0:
            ans.append(abs(num))
        else:
            nums[abs(num) - 1] *= -1
    return ans

def main():
    input_str = input("enter the array elements")
    arr = list(map(int, input_str.strip().split()))
    result = findduplicates(arr)
    print("duplicate elements:", result)

main()
