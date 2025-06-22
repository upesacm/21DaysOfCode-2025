arr = [] #initialize an empty array
#function to enter the element of array
def array(n):
    for i in range(n):
        while True:
            try:
                num = int(input(f"Enter the {i+1} element: "))
                break
            except ValueError:
                print("Enter the interger number please. ")
        arr.append(num)
    return arr
#function to check Negative number in array.
def Check_Negative_Number():
    for i in range(len(arr)):
        if arr[i] < 0:
            arr[i] = 0
    return arr
def main(): 
    n = int(input("Enter the number of element: ")) #Enter the number of array you want to insert 
    array(n) # call the array function
    print("Your arr is: ",arr)
    Check_Negative_Number()
    print("Updated array: ",arr)


if __name__ == "__main__":
    main()