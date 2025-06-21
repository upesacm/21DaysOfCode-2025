#Sarthak Jain 590014936
#Day 2 Question 3
#Check if Two Arrays are Equal

nums1 = []
nums2 = []

n = int(input("Enter number of elements in first array:"))
for i in range(n):
    b = int(input("Enter element for first array:"))
    nums1.append(b)

m = int(input("Enter number of elements in second array:"))
for i in range(m):
    b = int(input("Enter element for second array:"))
    nums2.append(b)

print("First Array:", nums1)
print("Second Array:", nums2)

# Sort and compare both arrays
nums1.sort()
nums2.sort()

if nums1 == nums2:
    print("true")
else:
    print("false")
