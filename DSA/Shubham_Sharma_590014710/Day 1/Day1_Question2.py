l = list(map(int, input("Enter numbers separated by spaces: ").split()))
sorted_list = sorted(l)
l2_len = max(l)
natural_numbers = [i for i in range(1, l2_len + 1)]
missing_numbers = [num for num in natural_numbers if num not in sorted_list]
twice = list({num for num in sorted_list if sorted_list.count(num) == 2})
print(f"Missing: {missing_numbers}",f"Twice: {twice}")