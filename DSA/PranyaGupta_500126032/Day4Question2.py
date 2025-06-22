class Solution:
    def RotatedArray(self, arr, k):
        n = len(arr)
        rotated_array = [0]*n
        for i in range(n):
            rotated_array[(i+k)%n] = arr[i]
        return rotated_array     
def main():
    user_input = input("Enter elements of the array (with space in between): ")
    arr = list(map(int, user_input.strip().split()))
    k = int(input("Enter k: "))
    sol = Solution()
    result = sol.RotatedArray(arr, k)
    print(result)
if __name__ == "__main__":
    main()