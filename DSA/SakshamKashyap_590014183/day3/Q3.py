#prompt the user to enter the element of array
array = list(map(int,input("Please Enter the Element of array(give spaces between them):").strip().split()))

#function to find the second largest Number 

def Second_Largest_Number():

    unique_array = list(set(array))

    if len(unique_array) < 2:

        return print("-1")
    
    unique_array.remove(max(unique_array))
    Second_largest = max(unique_array)

    return print(Second_largest)

Second_Largest_Number()

