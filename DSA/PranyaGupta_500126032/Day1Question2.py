class Solution:
    def MissingAndDuplicateNum(self, arr):
        for i in range(len(arr)):
            if i not in arr:
                missing = i #if i doesn't exist in array, it's missing
            if arr.count(i)==2:
                twice = i #if i's count is 2, it's occuring twice
        return f"Missing: {missing}, Twice: {twice}"                         

        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.MissingAndDuplicateNum(arr)
    print(result)
if __name__ == "__main__":
    main()