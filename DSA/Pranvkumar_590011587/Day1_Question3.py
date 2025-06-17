def sum_of_array(array):
    total = 0
    for num in array:
        total += num
    return total

# Example:
if __name__ == "__main__":
    array1 = [1, 2, 3, 4, 5]
    array2 = [10, 20, 30]
    print(sum_of_array(array1))  
    print(sum_of_array(array2)) 