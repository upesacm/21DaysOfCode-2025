l = list(map(int, input("Enter numbers separated by spaces: ").split()))
k = int(input("Enter the value to be removed: "))
print( len([x for x in l if x != k ]))