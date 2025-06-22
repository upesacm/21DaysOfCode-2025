def check_equal():
    nums1 = [] #Initialise empty list 
    nums2 = [] #Initialise empty list
    size1 = int(input("Enter the number of elements in the first array: "))
    
    for i in range(size1):
        nums1.append(int(input()))

    size2 = int(input("Enter the number of elements in the second array: "))

    for i in range(size2):
        nums2.append(int(input()))    

    #Iterates through each elemnt of first array and keeps removing it form second array
    for i in nums1:
        if i in nums2:
            nums2.remove(i)

    #If second array is empty that means both arrays are equal
    if not nums2:
        return True
    else:
        return False
print(check_equal())