def is_strictly_increasing(nums):
    for i in range(1, len(nums)):
        if nums[i] <= nums[i-1]:
            return False
    return True

# Example :
if __name__ == "__main__":
    print(is_strictly_increasing([1, 2, 3, 4]))   
    print(is_strictly_increasing([1, 2, 2, 3]))  
    print(is_strictly_increasing([5, 4, 3]))       
