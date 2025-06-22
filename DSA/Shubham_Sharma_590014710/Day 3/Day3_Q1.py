a = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
k = int(input("Enter the value of k: "))
print(sum([x for x in set(a) if a.count(x) == k]))