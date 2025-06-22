a = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
print(any(x for x in set(a) if a.count(x) > 1))  