def calculate_array_sum(array):
    total = 0
    for i in range(len(array)):
        total += array[i]
    return total

def main():
    n = int(input("Enter the number of elements: "))

    numbers = []
    print(f"Enter {n} integers:")
    for _ in range(n):
        num = int(input())
        numbers.append(num)

    result = calculate_array_sum(numbers)
    print(f"Sum of array elements: {result}")

if __name__ == "__main__":
    main()
