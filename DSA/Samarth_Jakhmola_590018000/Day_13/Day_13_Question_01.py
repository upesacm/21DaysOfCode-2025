def word_count_and_longest(string):
    if len(string) == 0:
        return -1
    s = ' '.join(string.strip().split()) + " "
    count = 0
    word = ""
    longest = ""
    beg = end = 0

    for i in range(0, len(s)):
        if s[i] == ' ':
            word = s[beg:i]
            count += 1
            if  len(word) > len(longest):
                longest = word
            beg = i + 1

    return count , longest

string = input("Enter a string : ")
count, longest = word_count_and_longest(string)
print("Invalid input. Please provide a valid string." if word_count_and_longest == -1 else f"Word count: {count}, Longest word: \"{longest}\"")
