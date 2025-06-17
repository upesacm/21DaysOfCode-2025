nums1 = [1, 2, 2, 3]
nums2 = [1, 2, 3, 3]
sum1 = 0 
sum2 = 0
a = False
for i in nums1 :
    sum1 = sum1 + i
for i in nums2:
    sum2 = sum2+ i
if sum1 == sum2 :
    a = True
print(a)
