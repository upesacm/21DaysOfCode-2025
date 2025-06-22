
def second_largest(nums):
    u = sorted(set(nums), reverse=True)
    return u[1] if len(u) > 1 else -1

nums = [3, 2, 1]
print(second_largest(nums))
#output: 2