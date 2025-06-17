arr=[]
#function to prompt the user to build the array
def user_array():
    n= int(input("Enter the Number of element you want to insert: "))
    for i in range (n):
        try:
            User_Input = int(input(f"Enter the {i+1} element: "))
        except ValueError:
            print("Value error!","Please enter valid number.")
        arr.append(User_Input)
    return arr
#function to find the the first and last array
def find_first_Last(arr):
    if not arr:
        print("Array is empty.")
        return
    first = arr[0]
    last = arr[len(arr)-1]
    print(f"First: {first} ,Last: {last}")

def main():
    user_array()
    find_first_Last(arr)

if __name__ == "__main__" :
    main()
