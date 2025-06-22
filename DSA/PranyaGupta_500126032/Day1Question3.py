class Solution:
    def SumOfArray(self, arr):
        sum = 0
        for n in arr:
            sum+=n #adding all elements to sum
        return sum                           

        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.SumOfArray(arr)
    print(result)
if __name__ == "__main__":
    main()