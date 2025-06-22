a = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
new_a = sorted(set(a), reverse=True)
print(new_a[1] if len(new_a) > 1 else -1)