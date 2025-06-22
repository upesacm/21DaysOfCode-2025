Your task:
Determine if the array is a palindrome and return true or false.

def is_palindrome_array(numbers):
    reversed_numbers = numbers[::-1]
    if numbers == reversed_numbers:
        return True
    else:
        return False
