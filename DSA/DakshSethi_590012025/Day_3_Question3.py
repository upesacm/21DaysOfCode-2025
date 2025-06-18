class Solution:
    def secondlargestnumber(self, nums):
        unique_nums = sorted(set(map(int, nums)))
        if len(unique_nums) < 2:
            return "no second largest no."
        return str(unique_nums[-2])

input_str = input("enter numbers")
nums = input_str.strip().split()

solution = Solution()
result = solution.secondlargestnumber(nums)
print("second largest no.:", result)
