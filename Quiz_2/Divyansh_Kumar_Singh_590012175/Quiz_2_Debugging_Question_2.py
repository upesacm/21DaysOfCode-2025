# Divyansh Kumar Singh 590012175

def first_non_repeating(s):
    char_count = {}
    # Count frequencies (ignoring whitespaces)
    for char in s:
        if not char.isspace():
            char_count[char] = char_count.get(char, 0) + 1

    # Find first non-repeating character (ignoring whitespaces)
    for char in s:  # Line A
        if not char.isspace() and char_count[char] == 1:
            return s.index(char)  # Line B
    return -1



# 1. Identify the bug in the algorithm
# - Using s.index(char) (Line B) is incorrect because it always returns
#   the first occurrence in the original string, even if there are
#   whitespace-separated duplicates. This can produce the wrong index.
# - Also, dict did not guarantee insertion order before Python 3.7,
#   so relying on dictionary iteration order can be unsafe in older versions.
#
# 2. Explanation
# - To find the first non-repeating non-whitespace character correctly,
#   we should iterate over the original string with indices and compare counts,
#   instead of using s.index().
# - The function correctly ignores all types of whitespace while counting.
#
# 3. Suggested fix
# - Replace s.index(char) with direct tracking of the index:
#   for i, char in enumerate(s):
#       if not char.isspace() and char_count[char] == 1:
#           return i
