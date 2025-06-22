class Solution:
    def SecondLargestElemnet(self, arr):
        arr = sorted(arr)
        largestElement = arr[-1]
        for n in arr[::-1]:
            if n!= largestElement:
                return n
        return -1
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.SecondLargestElemnet(arr)
    print(result)
if __name__ == "__main__":
    main()