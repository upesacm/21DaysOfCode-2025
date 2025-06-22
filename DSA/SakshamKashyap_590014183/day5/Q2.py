# Finding the missing term by using the method excepted vs actual sum

# prompt the user to enter the array.

My_array = list(map(int,input("Enter the element of array(give spacce betweem them): ").strip().split()))

def missing_term():
    actual_sum = 0
    except_sum = 0
    for num in My_array:
        actual_sum += num
    print(f"Actaul sum of is: {actual_sum}")

    for i in range(max(My_array)+1):
        except_sum += i
    print(f"Except sum of is: {except_sum}")

    missing_term = except_sum - actual_sum
    return print(f"The Missing term in the array is: {missing_term}")

missing_term()

    
        
