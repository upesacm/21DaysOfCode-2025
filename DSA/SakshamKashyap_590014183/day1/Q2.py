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
#function to find a duplicate number in array
def Number_appears_twice():
    duplicate = []
    for num in set(arr):
        if  arr.count(num) > 1:
            duplicate.append(num)
    print(f"duplicate Number: {duplicate}")

#function to find the missing array element in array
def Missing_Number():
    Missing = []    
    for num in range(1,max(arr)+1):
        if num not in arr:
            Missing.append(num)
    print(f"Missing Number: {Missing}")

def main():
    User_Input()
    print(arr)
    Number_appears_twice()
    Missing_Number()

if __name__ == "__main__":
    main()