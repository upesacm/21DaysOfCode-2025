Your task:
Rotate the array to the right by k steps and return the rotated array.
def rotate_array(nums, k):
    n = len(nums)
    k = k % n
    rotated_part = nums[-k:]       
    rest_part = nums[:-k]     
    rotated_array = rotated_part + rest_part
    return rotated_array


