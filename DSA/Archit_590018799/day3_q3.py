num = [10, 20, 30, 40]
num.sort(reverse=True)
allsame = True

for i in range(len(num) - 1):
    if num[i] != num[i + 1]:
        allsame = False
        second = num[i + 1]
        break  

if allsame == True:
    print("-1")
else :
    print(second)
