#include <stdio.h>
#define MAX 10000  

int kFrequencySum(int arr[], int n, int k) {
    int freq[MAX] = {0};
    int sum = 0;

   
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    
    for (int i = 0; i < MAX; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    int result = kFrequencySum(arr, n, k);
    printf("Sum of elements that appear exactly %d times: %d\n", k, result);
    if (result == 0) {
        printf("No elements found that appear exactly %d times.\n", k);
    }
    else {
        printf("Elements that appear exactly %d times contribute to the sum: %d\n", k, result);
    }
    
    return 0;
}
