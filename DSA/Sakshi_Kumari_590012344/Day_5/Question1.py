Your task:
Find and return the element that appears only once in the array.

def search_unique_element(numbers):
    result = 0
    for number in numbers:
        result = result ^ number
    return result
