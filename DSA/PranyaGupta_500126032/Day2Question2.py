class Solution:
    def FirstAndLastElement(self, arr):
        first = arr[0]
        last = arr[-1]
        return f"First: {first}, Last: {last}"
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.FirstAndLastElement(arr)
    print(result)
if __name__ == "__main__":
    main()