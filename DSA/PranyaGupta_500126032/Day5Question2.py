class Solution:
    def MissingElement(self, arr):
        n = len(arr)
        actualres = 0
        expectedres = 0
        for num in arr:
            actualres^=num
        for i in range(1,n+2):
            expectedres^=i    
        return actualres^expectedres 
        

def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    sol = Solution()
    result = sol.MissingElement(arr)
    print(result)
if __name__ == "__main__":
    main()