#1. In line 1, right should be len(nums)-1, line 7 and line 3 is causing error, as when target< arr[mid], left should be mid+1
#2. because the condition left==right was missing and value for left was updated incorrectly
#3. correct implementation

def binary_search(nums, target): 
    left, right = 0, len(nums)-1 # Line 1
    while left <= right: # Line 2
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target: 
            left = mid+1 # Line 3
        else:
            right = mid-1 # Line 4
    return -1