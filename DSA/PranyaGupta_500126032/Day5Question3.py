class Solution:
    def PalindromeArray(self, arr):
        palarr = arr[::-1]
        if arr == palarr:
            return True   
        else:
            return False

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.PalindromeArray(arr)
    print(result)
if __name__ == "__main__":
    main()