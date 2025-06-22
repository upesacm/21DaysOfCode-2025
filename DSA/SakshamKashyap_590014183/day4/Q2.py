def rotate_array():
    array = list(map(int,input("Enter the number of elemets(Give a space between them): ").strip().split()))
    k = int(input("Enter the steps: "))
    Rotated_arr = [0] * (len(array))
    for i in range(len(array)):
        Rotated_arr[(k+i)%(len(array))] = array[i]
    print(Rotated_arr)

rotate_array()
