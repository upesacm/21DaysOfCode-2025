#Code to find duplicate in array 

#Prompt the user to enter the elments of array
My_array = list(map(int, input("Enter the Element of array(give space between them): ").strip().split()))

def duplicate_Number():
    
    duplicate= set([num for num in set(My_array) if My_array.count(num) > 1])
    return print(list(duplicate))

duplicate_Number()