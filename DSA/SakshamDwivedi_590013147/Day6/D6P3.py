#Fixed Array Input (C style solution)
arr1 = [1, 2, 2, 3, 4, 1, 2, 3, 4, 5]
arr2 = [1, 2, 3, 5, 6, 7]
arr3 = [5, 4, 3, 2]
def largest_subarray(arr):
    max_size = 0
    start_index = 0
    end_index = 0

    current_size = 0
    for i in range(1, len(arr)):
        if(arr[i] - arr[i-1] == 1):
            current_size += 1  
        elif(current_size >= max_size):
            start_index = end_index
            end_index = i
            max_size = current_size
            current_size = 0
    if(current_size >= max_size):
        start_index = end_index
        end_index = i
        if(end_index == len(arr) - 1):
            end_index += 1
        max_size = current_size
        current_size = 0

    print("Max Size of the SUBARRAY : ", max_size+1)
    print("SUBARRAY : ", arr[start_index:end_index])

largest_subarray(arr1)
largest_subarray(arr2)
largest_subarray(arr3)
#Custom Input Array (C style code)
arr = list(int(x) for x in input("Enter the array : ").split())
def largest_subarray(arr):
    max_size = 0
    start_index = 0
    end_index = 0

    current_size = 0
    for i in range(1, len(arr)):
        if(arr[i] - arr[i-1] == 1):
            current_size += 1  
        elif(current_size >= max_size):
            start_index = end_index
            end_index = i
            max_size = current_size
            current_size = 0
    if(current_size >= max_size):
        start_index = end_index
        end_index = i
        if(end_index == len(arr) - 1):
            end_index += 1
        max_size = current_size
        current_size = 0

    print("Max Size of the SUBARRAY : ", max_size+1)
    print("SUBARRAY : ", arr[start_index:end_index])
largest_subarray(arr)
