arr = []
#Funtion to take user_Input array
def User_Input():
    n = int(input("Enter the Number of elements in array: "))
    for i in range(0,n):
        while True:
            try:
                element=int(input(f"Enter the {i+1} element: "))
                break
            except ValueError:
                print("❌ Enter the Integer Number please.")
        arr.append(element)
    return arr
#function to add the array element
def add_element():
    add=0
    for i in range(len(arr)):
        add += arr[i]
    print(f"Sum of element of array is: {add}")
    return add

def main():
    User_Input()
    add_element()

if __name__ == "__main__":
    main()
