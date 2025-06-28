def word_count_and_longest_word(s):
    
    trimmed = s.strip()
    if not trimmed:
        return "Word count: 0\nLongest word: \"\""
    
    words = []
    current_word = []
    
    for char in trimmed:
        if char != ' ':
            current_word.append(char)
        else:
            if current_word:
                words.append(''.join(current_word))
                current_word = []
    
    if current_word:
        words.append(''.join(current_word))
    
    word_count = len(words)
    longest_word = max(words, key=len) if words else ""
    
    return f"Word count: {word_count}\nLongest word: \"{longest_word}\""


input_string = input("Enter any string:")
print(word_count_and_longest_word(input_string))