class Solution:
    def SumOfEvenNum(self, arr):
        sum = 0
        for n in arr:
            if n%2==0:  #check if n is even
                sum+=n #add it to sum
        return sum
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.SumOfEvenNum(arr)
    print(result)
if __name__ == "__main__":
    main()