l = list(map(int, input("Enter numbers separated by spaces: ").split()))
print(sum([x for x in l if x%2 == 0]))