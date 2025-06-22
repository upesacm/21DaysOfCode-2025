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
#function to sum of all the even number term
def sum_Even():
   return sum([i for i in arr if i % 2 == 0])

def main():
    user_array()
    print(arr)
    Sum = sum_Even()
    print(f"Sum of even number is: {Sum}")

if __name__ == "__main__":
    main()
