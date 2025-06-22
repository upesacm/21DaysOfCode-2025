
array = list(map(int,input("Enter the element of array(give a space between them): ").strip().split()))
New_array = list(set(array))


if len(New_array) == 0: 
    print("The array is empty.")
else:
    print(f"The array is: {New_array}")
    print(f"the minimum element of array is: {min(New_array)}")

