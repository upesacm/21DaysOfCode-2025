nums = input("Enter numbers: ").split()
even_sum = 0
for num in nums:
    if int(num) % 2 == 0: 
        even_sum = even_sum + int(num)  
print("Sum of all even numbers:", even_sum)
