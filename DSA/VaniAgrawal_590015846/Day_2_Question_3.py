#Determine if two arrays contain the same elements with the same frequencies. 
num1=list(map(int,input("enter array 1 with space :").split()))
num2=list(map(int,input("enter array 2 with space :").split()))
#checking if they have unique elements
set1=set(num1)
set2=set(num2)
sol1= set1==set2
#checking if there frequencies are same or not
count1={}
for n in num1:
    if n in count1:
        count1[n]= count1[n]+1
    else:
        count1[n]=1
count2={}
for n in num2:
    if n in count2:
        count2[n]= count2[n]+1
    else:
        count2[n]=1
if count1== count2:
    sol2=True
else:
    sol2=False

if sol1 and sol2 :
    print(True)    
else:
    print(False)
