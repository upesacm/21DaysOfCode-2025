'''
Bug : variable max is not initialized due to which max 
will start with a garbage value and none of the array element will replace mmax_value
'''

def find_max(arr):
    max_val=arr[0]; #Initialize with the first element

    for i in range (1,len(arr)):
        if(arr[i] > max_val):
            max_val = arr[i]
    return max_val

#Example
arr=[5,7,2,9,14,8]
print('Maximum element is: ', find_max(arr))