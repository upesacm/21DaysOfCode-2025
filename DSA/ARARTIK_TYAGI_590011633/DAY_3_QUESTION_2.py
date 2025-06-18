# User input
nums = list(map(int, input("Enter the array elements separated by space: ").split()))

seen = set()
has_duplicate = False
for num in nums:
    if num in seen:
        has_duplicate = True
        break
    seen.add(num)

print("Output:", has_duplicate)