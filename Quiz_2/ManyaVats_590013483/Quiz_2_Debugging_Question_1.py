def is_digits_only(s):
    if len(s) == 0:
        return False
    for char in s:
        if char < '0' or char > '9':
            return False
    return True

test_strings = ["123", "12a", "", "0"]
for t in test_strings:
    print(f"{t!r} -> {is_digits_only(t)}")


Why other options are wrong:
B) Indexing is not required; iterating over characters is fine in Python.

C) Character comparison works fine in Python as it compares ASCII values internally.

D) Negative numbers (-123) would still contain a '-' character, which is not a digit —
but the function is clearly meant to validate only digits, not signed numbers.
