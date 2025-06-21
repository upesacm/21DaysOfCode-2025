class Solution:
    def FullyIncreasing(self, arr):
        for i in range(len(arr)-1):
            if arr[i] >= arr[i+1]:
                return False
        return True    

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.FullyIncreasing(arr)
    print(result)
if __name__ == "__main__":
    main()