#User Input Array
user_str = input("Enter the array element and give the space: ")
array = list(map(int,user_str.strip().split()))
print(array)

k = int(input("Enter the number of Frequency: ")) # k = frequency of number

def freq_check():
    freq = {}
    for num in array:
        if num in freq:
            freq[num] += 1
        else : 
            freq [num] = 1
    return freq

def sum_number():
    sum = 0
    frequency = freq_check()
    print(frequency)
    for num,x in frequency.items():
        if x == k:
            sum += num 
    return sum

Sum= sum_number()
print(Sum)



    


