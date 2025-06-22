size = int(input("Enter size of Array: "))
print(f"Enter {size} elements: ")

lst = []
for i in range(size):
    element = int(input(f"Enter element {i+1}: "))
    lst.append(element)

k = int(input("Enter frequency: "))


freq = {}
for num in lst:
    if num in freq:
        freq[num] += 1  
    else:
        freq[num] = 1   


result = sum(num for num, count in freq.items() if count == k)

print("Output:", result)
