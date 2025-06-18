#Prompt user to insert a array
array = list(map(int,input("Enter the Element of array(give space between them): ").strip().split()))
print(array)
def check_duplicate_array():        
    for num in set(array):
        if array.count(num) > 1:
            return True
    else:
        return False
    
Result = check_duplicate_array()
print(Result)