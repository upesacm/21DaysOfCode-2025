l = list(map(int, input("Enter numbers separated by spaces: ").split()))
print([ 0 if x < 0 else x for x in l ])
