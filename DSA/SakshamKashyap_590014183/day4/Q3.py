#prompt the user to enter the array

My_Array = list(map(int,input("Enter the number of element in array(give a space between them): ").strip().split()))

My_Array_length= len(My_Array) #length of the array before modify.

num = int(input("Enter the number you want to delete form array: "))

for i in range(My_Array_length):
    if num in My_Array:
        My_Array.remove(num)


New_length = len(My_Array)

print(f"The Modify array is after deleting the number is: {My_Array}",end="\n") 
print(f"The Length of array after deleting the number is: {New_length}")           