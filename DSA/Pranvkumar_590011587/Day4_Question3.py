def remove_element(nums, val):
    k = 0  
    for i in range(len(nums)):
        if nums[i] != val:
            nums[k] = nums[i]
            k += 1
    return k

# Example :
if __name__ == "__main__":
    nums1 = [3, 2, 2, 3]
    val1 = 3
    print(remove_element(nums1, val1)) 

    nums3 = [1, 1, 1]
    val3 = 1
    print(remove_element(nums3, val3))  