class Solution:
    def ReplaceWithZero(self, arr):
        for i in range(len(arr)):
            if arr[i]<0:  #check if number is negaative
                arr[i] = 0 #set that number to 0
        return arr
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.ReplaceWithZero(arr)
    print(result)
if __name__ == "__main__":
    main()