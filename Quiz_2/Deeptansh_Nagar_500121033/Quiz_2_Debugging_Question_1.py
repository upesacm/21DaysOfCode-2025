# Bug in this code -
#  function returns True when the input string is empty (""), which is not logically correct. # empty string doesnt contain any digits so it should return false
# if len(s) == 0:
#       return True   # incorrect logic      # it should return false.

# correct option - A) Empty string should return False since it contains no digits
# correct code - 
def check_digits(s):
    if len(s) == 0:
        return False  # issue fixed ;o
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

# all Test case
test_cases = ["123", "", "12a3", "007", "abc"]
for test in test_cases:
    result = check_digits(test)
    print(f'check_digits("{test}") = {str(result).lower()}')
