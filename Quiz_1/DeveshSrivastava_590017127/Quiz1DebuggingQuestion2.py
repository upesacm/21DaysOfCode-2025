class Solution:

    def findMax(self, arr: list[int]) -> int:
        if not arr:
            return 0
        max_value = arr[0]
        for i in range(1, len(arr)):
            if arr[i] > max_value:
                max_value = arr[i]
        return max_value


# Problems with the original function:
# 1. Max variable is uninitialised
# 2. Uninitialised max value compared with elements in the array can cause undefined behavior


def main():
    solution = Solution()
    arr = [3, 1, 4, 1, 5, 9, 2, 6]
    print(arr)
    print(solution.findMax(arr))
