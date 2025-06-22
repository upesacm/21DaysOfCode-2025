# prompt the user to enter the array

My_array = list(map(int,input("Enter the Element of array(Give space between them): ").strip().split()))

def palindrome_array():

    length = len(My_array)

    reverse_array = [0] * length # empty array

    # loop for reversing the current array.

    for i in range(0,length):
        reverse_array[i] = My_array[(length-1)-i]       
    print(f"Reverse array is: {reverse_array}")

    if reverse_array == My_array:
        print("true")
    else:
        print("false")
        
palindrome_array()
        
        
