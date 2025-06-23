def character_count(s, char):
    count = s.count(char)
    print(f"Character '{char}' occurs {count} time(s) in \"{s}\"")

# Example usage
character_count("programming", 'r')
character_count("Hello World", 'l')
character_count("JavaScript", 'a')
