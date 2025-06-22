nums = list(map(int, input("Enter numbers (space-separated): ").split()))

if nums == nums[::-1]:
    print("True - The array is a palindrome.")
else:
    print("False - The array is not a palindrome.")