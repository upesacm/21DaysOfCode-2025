arr = []
print("Enter 5 numbers:")
for i in range(5):
    num = int(input(f"Enter numbers {i+1}: "))
    arr.append(num)
i = 0               
j = 4             
while i < j:
    if arr[i] != arr[j]:
        print("False")
        break
    i = i + 1
    j = j - 1
else:
    print("True")
