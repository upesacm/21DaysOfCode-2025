user = input("Enter a string: ")

all_spaces_removed = user.replace(" ", "")

trimmed_string = user.strip()

single_spaced_string = ' '.join(user.split())

print("Original: ", repr(user))
print("All spaces removed: ", repr(all_spaces_removed))
print("Trimmed: ", repr(trimmed_string))
print("Extra spaces removed: ", repr(single_spaced_string))
