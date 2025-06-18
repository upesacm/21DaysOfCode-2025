def checks_for_duplicates(nums):
    seen = set()  # Initializing an empty set
    for num in nums:
        if num in seen:  # Checks if the number already exists in the set
            return True  # if finds duplicate of the number
        seen.add(num)  # adds the number to the set which was empty 
    return False  # if finds no duplicate number

# Example usage:
nums = [1, 2, 2, 3, 4]
print(checks_for_duplicates(nums))  # Output: True