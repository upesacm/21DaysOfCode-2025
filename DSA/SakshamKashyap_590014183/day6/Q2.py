# Prompt the user to enter the elements of the array
My_array = list(map(int, input("Enter the elements of the array (space-separated): ").strip().split()))
 

# Function to check if the array is strictly increasing
def Monotonic_increase():
    for index in range(1, len(My_array)):
        if My_array[index - 1] >= My_array[index]:
            return False
    return True

# Call and print result
result = Monotonic_increase()
print("Is the array strictly increasing?", result)
