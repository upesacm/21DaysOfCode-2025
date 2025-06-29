# 1. The bug in is_digits_only is that it returns True for an empty string, 
# but an empty string should return False since it contains no digits.
def is_digits_only(string):
	if len(string) == 0:
		return False  # Fix: should return False for empty string
	for char in string:
		if char < '0' or char > '9':
			return False
	return True

# Example 

print(is_digits_only("12345"))    
print(is_digits_only("abc123"))   
print(is_digits_only(""))         
print(is_digits_only("007"))     
print(is_digits_only("12 34"))   
