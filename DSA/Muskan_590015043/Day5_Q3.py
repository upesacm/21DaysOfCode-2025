nums = list(map(int,input("Enter the array of numbers: ").split()))
def check_palindrome(list1):
    rev_list = list(reversed(list1))
    if rev_list == nums:
        return True
    else:
        return False
print(check_palindrome(nums))