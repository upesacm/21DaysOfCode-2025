#prompt the user to enter the elements of array

My_Array = list(map(int,input("Enter the Element of array(please give space between them):").strip().split()))

def Sub_array():
    sub_array_New = []
    Sub_array = [My_Array[0]]
    for i in range (1,len(My_Array)):
        if ( My_Array[i] - My_Array[i-1] == 1 ) :
            Sub_array.append(My_Array[i])
        else:
            if len(Sub_array) > 1:
                sub_array_New.append(Sub_array)
            Sub_array = [My_Array[i]]

    if len(Sub_array) > 1:
        sub_array_New.append(Sub_array)

#Now check the lenght of longest array
    if sub_array_New:
        longest = max(sub_array_New, key = len)
        longest_lenght = max(longest)

        print(longest_lenght)
        

Sub_array()
        
        
