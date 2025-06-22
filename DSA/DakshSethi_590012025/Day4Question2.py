user_input = input("enter the numbers \n")
nums = list(map(int, user_input.strip().split()))

k = int(input("enter the number of rotations \n"))

#rotate
def rotate(nums, k):
    n = len(nums)
    k = k % n
    nums[:] = nums[-k:] + nums[:-k]
rotate(nums, k)
print("rotated list:", nums)
