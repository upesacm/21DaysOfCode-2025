def zero(nums):
    return [0 if num < 0 else num for num in nums]

nums1=[-1,2,-3,4,5]
nums2=[0,-5,-10]

print(zero(nums1))
print(zero(nums2))
