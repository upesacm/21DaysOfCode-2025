
#in this ques code was returning true if input is empty string like "" but thats wrong bcz its empty means no chars at all not even one digit so how can it be only digits
# so right answer is--- A) empty string should return false since it got nothing
# rest options dont make sense


def is_digits_only(s):
# this was bug in original code = it was saying empty string is valid but its not
    if len(s) == 0:
        return False  # fixed this line to make it correct

    #rest part is ok it check if all chars are  digits
    for char in s:
        if char < '0' or char > '9':
            return False

    return True  #all good so return true
#TO CHECK
print(is_digits_only(""))  #false bcz its empty
print(is_digits_only("6987")) # true all digits
print(is_digits_only("766g76")) # false got a

