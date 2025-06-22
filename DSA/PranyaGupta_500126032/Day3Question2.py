class Solution:
    def DuplicateCheck(self, arr):
        for n in arr:
            if arr.count(n)>1:  #if n appear more than once
                return True
        return False
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.DuplicateCheck(arr)
    print(result)
if __name__ == "__main__":
    main()