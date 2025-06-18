#INPUT ARRAY
list1 = []
n = int(input("Enter the range: "))
count = 0
while count < n:
    num = int(input())
    if 1 <= num <= n:
        list1.append(num)
        count += 1
    else:
        print(f"Please enter a number between 1 and {n}")
print(list1)
#INITIALISE MISSING VALUE AND DUPLICATE VALUE
missing_value = 0
duplicate_value = 0

#FOR DISTINCT VALUES
seen = set(list1)

#TO FIND THE MISSING VALUE
for i in range(1,n+1):
    if i not in seen:
        missing_value = i

#SEC LOOP TO FIND DUPLICATE VALUE
for num in list1:
    if num in seen:
        seen.remove(num)
    else:
        duplicate_value = num
print(f"Missing: {missing_value}, Twice: {duplicate_value}")