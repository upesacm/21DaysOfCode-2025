#include <stdio.h>

void findErrorNumbers(int arr[], int size) {
    int total = size * (size + 1) / 2;
    int square_total = size * (size + 1) * (2 * size + 1) / 6;

    int sum = 0;
    int square_sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        square_sum += arr[i] * arr[i];
    }

    int diff = sum - total;                       
    int square_diff = square_sum - square_total;   

    int dup_plus_miss = square_diff / diff;

    int duplicate = (diff + dup_plus_miss) / 2;
    int missing = duplicate - diff;

    printf("Missing: %d, Twice: %d\n", missing, duplicate);
}

int main() {
    int data1[] = {3, 1, 3};
    {
        int size1 = sizeof(data1) / sizeof(data1[0]);
        findErrorNumbers(data1, size1); 
    }

    int data2[] = {4, 3, 6, 2, 1, 1};
    {
        int size2 = sizeof(data2) / sizeof(data2[0]);
        findErrorNumbers(data2, size2); 
    }

    return 0;
}
