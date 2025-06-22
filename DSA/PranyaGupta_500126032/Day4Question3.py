class Solution:
    def RemoveOccurence(self, arr, val):
        count = arr.count(val)
        return len(arr) - count        
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    val = int(input("Enter value to be removed: "))
    sol = Solution()
    result = sol.RemoveOccurence(arr, val)
    print(result)
if __name__ == "__main__":
    main()