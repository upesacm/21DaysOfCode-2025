nums = list(map(int, input("Enter numbers (space-separated): ").split()))

unique = 0
for num in nums:
    unique ^= num  # XOR operation cancels out duplicates

print("The unique element is:", unique)