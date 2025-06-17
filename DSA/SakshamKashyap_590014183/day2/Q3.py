
def User_Input_arr(Prompt):
    arr = [] # Empty Error
    n = int(input("Enter the number of element you wnat to insert in array: "))
    for i in range (0,n):
        try: 
            User_Input = int(input(f"Enter the {i+1} element: "))
        except ValueError:
            print("Value error!","Please enter valid number.")
        arr.append(User_Input)
    print(f"{Prompt} : {arr}")
    return arr
def count_Frequency(arr):
    freq = {}
    for num in arr:
        if num in freq:
            freq[num]+=1
        else:
            freq[num] = 1
    return freq

def comparision(arr1,arr2):
    if len(arr1) != len(arr2):
        return False
    freq1 = count_Frequency(arr1)
    freq2 = count_Frequency(arr2)
    return freq1 == freq2


arr1 = User_Input_arr("Arr1")
arr2 = User_Input_arr("Arr2")
ANS = comparision(arr1,arr2)
print(f"Array are equal or not(True or False) : {ANS}")