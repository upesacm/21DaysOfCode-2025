nums = list(map(int,input("Enter the array elemnts seperated by space: ").split()))
def rotate(l):
    last = l[len(l) - 1]  
    for i in range(len(l) - 1, 0, -1):
        l[i] = l[i - 1]
    l[0] = last
k = int(input("Enter the value of k (no of rotations): "))
for i in range(k):
    rotate(nums)
print(nums)