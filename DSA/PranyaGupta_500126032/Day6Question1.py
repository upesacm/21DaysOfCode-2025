class Solution:
    def OccurTwice(self, arr):
        for n in arr:
            if arr.count(n)==2:
                return n

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.OccurTwice(arr)
    print(result)
if __name__ == "__main__":
    main()