class Solution:
    def EqualArrays(self, arr1, arr2):
        if len(arr1) != len(arr2):
            return False
        for i in range(len(arr1)):
            if arr1.count(arr1[i]) == arr2.count(arr2[i]):
                return True
            else:
                return False
def main():
    user_input1 = input("Enter elements of the array1 (with space in between): ")
    arr1 = list(map(int, user_input1.strip().split()))
    user_input2 = input("Enter elements of the array2 (with space in between): ")
    arr2 = list(map(int, user_input2.strip().split()))
    sol = Solution()
    result = sol.EqualArrays(arr1,arr2)
    print(result)
if __name__ == "__main__":
    main()