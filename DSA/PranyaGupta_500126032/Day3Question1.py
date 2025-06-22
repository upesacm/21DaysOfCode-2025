class Solution:
    def SumOfkFrequency(self, arr, k):
        sum = 0
        for n in arr:
            if arr.count(n) == k:  #if frequency of n==k
                sum+=n #add it to sum
        return sum
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    k = int(input("Enter k: "))
    sol = Solution()
    result = sol.SumOfkFrequency(arr, k)
    print(result)
if __name__ == "__main__":
    main()