class Solution(object):
    def containsdup(self, nums):
        return len(nums) != len(set(nums))

input_str = input("enter number: ")
nums = list(map(int, input_str.strip().split()))

solution = Solution()
result = solution.containsdup(nums)
print(result)
