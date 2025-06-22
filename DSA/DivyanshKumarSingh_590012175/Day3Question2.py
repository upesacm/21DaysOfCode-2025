def duplicate(lst):
    '''
    Method 1:
    for i in range(0, size):
        c=0
        for j in range(i+1, size):
            if (lst[i]==lst[j]):
                return True
    return False
    
    Method 2:
    return (len(lst) != len(set(lst)))

    '''
    #Method 3: (Set-Based Thinking)
    seen = set()
    for num in lst:
        if num in seen:
            return True
        seen.add(num)
    return False


size = int(input("Enter size of Array: "))
print(f"Enter {size} elements: ")

lst = []
for i in range(size):
    element = int(input(f"Enter element {i+1}: "))
    lst.append(element)

print (duplicate(lst))
