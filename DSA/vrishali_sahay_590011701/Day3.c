#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 1000

// 1. K-Frequency Element Sum
int k_frequency_sum(int arr[], int n, int k) {
    int freq[MAX_SIZE*2+1] = {0}; // To handle negative numbers, offset by MAX_SIZE
    int offset = MAX_SIZE;
    int sum = 0;
    for(int i = 0; i < n; i++)
        freq[arr[i] + offset]++;
    for(int i = 0; i < 2*MAX_SIZE+1; i++)
        if(freq[i] == k)
            sum += (i - offset);
    return sum;
}

// 2. Check for Duplicates
bool has_duplicates(int arr[], int n) {
    int freq[MAX_SIZE*2+1] = {0};
    int offset = MAX_SIZE;
    for(int i = 0; i < n; i++) {
        freq[arr[i] + offset]++;
        if(freq[arr[i] + offset] > 1)
            return true;
    }
    return false;
}

// 3. Find the Second Largest Element
int second_largest(int arr[], int n) {
    int first = -2147483648, second = -2147483648;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
            found = true;
        }
    }
    if(first == second || !found)
        return -1;
    return second;
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. K-Frequency Element Sum\n");
        printf("2. Check for Duplicates\n");
        printf("3. Find the Second Largest Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3) {
            int n, arr[MAX_SIZE];
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d integers:\n", n);
            for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);

            if(choice == 1) {
                int k;
                printf("Enter value of k: ");
                scanf("%d", &k);
                int result = k_frequency_sum(arr, n, k);
                printf("Sum of elements appearing exactly %d times: %d\n", k, result);
            } else if(choice == 2) {
                if(has_duplicates(arr, n))
                    printf("true\n");
                else
                    printf("false\n");
            } else if(choice == 3) {
                int result = second_largest(arr, n);
                printf("Second largest unique element: %d\n", result);
            }
        } else if(choice == 4) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}