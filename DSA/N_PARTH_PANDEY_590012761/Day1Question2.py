def find_error_numbers(arr):
    size = len(arr)
    total = size * (size + 1) // 2
    square_total = size * (size + 1) * (2 * size + 1) // 6

    sum_arr = sum(arr)
    square_sum_arr = sum(x * x for x in arr)

    diff = sum_arr - total
    square_diff = square_sum_arr - square_total

    dup_plus_miss = square_diff // diff

    duplicate = (diff + dup_plus_miss) // 2
    missing = duplicate - diff

    print(f"Missing: {missing}, Twice: {duplicate}")

def main():
    data1 = [3, 1, 3]
    find_error_numbers(data1)

    data2 = [4, 3, 6, 2, 1, 1]
    find_error_numbers(data2)

if __name__ == "__main__":
    main()
