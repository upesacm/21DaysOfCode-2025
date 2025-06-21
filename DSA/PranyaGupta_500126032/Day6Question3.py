class Solution:
    def lengthSubarray(self, nums):
        if len(nums) == 0:
            return 0
        maxLen = 1
        currentLen = 1
        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] + 1:
                currentLen += 1
                maxLen = max(maxLen, currentLen)
            else:
                currentLen = 1
        return maxLen

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    nums = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.lengthSubarray(nums)
    print(result)

if __name__ == "__main__":
    main()
