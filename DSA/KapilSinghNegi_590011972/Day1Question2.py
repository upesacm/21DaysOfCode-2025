import numpy as np

arr = np.array([int(i) for i in input().split(sep=',')])
#a = x-y, b=x^2 - y^2, c = x+y

n = len(arr)
a, b = n*(n+1)//2 - sum(arr), n*(n+1)*(2*n+1)//6 - sum(arr**2)
c = b//a

print("Missing:%s, Duplicate:%s"%((a+c)//2, (c-a)//2))
