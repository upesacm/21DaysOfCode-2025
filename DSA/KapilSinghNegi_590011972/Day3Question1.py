arr, k = [int(i) for i in input().split(sep=',')], int(input())
counter = dict()
for i in arr:
    if i in counter:
        counter[i]+=1
    else:
        counter[i]=1
arrFinal = [i for i in counter if counter[i]==k]
print(sum(arrFinal))
