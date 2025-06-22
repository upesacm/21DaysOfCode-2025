class Solution:
    def MinimumElement(self, arr):
        minele = arr[0]
        for n in arr:
            minele = min(n, minele)
        return minele
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.MinimumElement(arr)
    print(result)
if __name__ == "__main__":
    main()