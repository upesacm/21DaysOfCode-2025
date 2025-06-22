def find_unique(nums):
    unique = 0
    for num in nums:
        unique ^= num
    return unique

# Example :
if __name__ == "__main__":
    print(find_unique([2, 2, 1]))          
    print(find_unique([4, 1, 2, 1, 2]))   
           