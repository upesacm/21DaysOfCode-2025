from collections import Counter
 
def equ_arr(nums1,nums2):
    return Counter(nums1)==Counter(nums2)

print(equ_arr([1,2,3,4],[4,3,2,1]))
print(equ_arr([1,2,2,3],[1,2,3,3]))
print(equ_arr([1,2,3],[1,2,3,4]))
