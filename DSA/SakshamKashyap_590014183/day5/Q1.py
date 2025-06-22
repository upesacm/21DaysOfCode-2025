# prompt the user to the array.
My_array = list(map(int,input("Enter the Element of array(Give spaces between them): ").strip().split()))

def Unique_Element():
    freq = {}
    for num in My_array:
        if num in freq:
            freq [num] += 1
        else:
            freq [num] = 1

    for key,value in freq.items():
        if value == 1:
            return print(f"Unique number in array is: {key}") 

Unique_Element()