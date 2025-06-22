from collections import deque
l = list(map(int, input("Enter numbers separated by spaces: ").split()))
a = int(input("Enter the number of rotations: "))
d = deque(l)
d.rotate(a)
print(list(d))