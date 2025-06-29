def buggy_first_non_repeating(s):
    """Original buggy version"""
    char_count = 0  # ❌ Bug: Should be a dict, not int

    try:
        # Count frequencies
        for char in s:
            char_count[char] = char_count.get(char, 0) + 1  # ❌ Will throw AttributeError

        # Find first non-repeating
        for char in char_count:  # Iterates in dict insertion order (OK in Python 3.7+)
            if char_count[char] == 1:
                return s.index(char)
        return -1
    except Exception as e:
        print("❌ Bug identified:", e)
        return None


def correct_first_non_repeating(s):
    """✅ Correct implementation"""
    from collections import OrderedDict

    # Step 1: Count frequencies in order of appearance
    char_count = OrderedDict()
    for char in s:
        char_count[char] = char_count.get(char, 0) + 1

    # Step 2: Return index of first character with count 1
    for char in char_count:
        if char_count[char] == 1:
            return s.index(char)
    return -1


# --- Test Inputs to Validate ---
test_strings = [
    "aabbccdeff",     # first non-repeating = 'd' → index 6
    "aabbcc",         # all repeating → -1
    "swiss",          # first non-repeating = 'w' → index 1
    "racecars",       # first non-repeating = 'e' → index 3
    "",               # empty string → -1
    "x",              # single character → 0
]

print("🚫 Testing Buggy Version:")
for s in test_strings:
    print(f"Input: '{s}' → Output: {buggy_first_non_repeating(s)}")

print("\n✅ Testing Corrected Version:")
for s in test_strings:
    print(f"Input: '{s}' → Output: {correct_first_non_repeating(s)}")
