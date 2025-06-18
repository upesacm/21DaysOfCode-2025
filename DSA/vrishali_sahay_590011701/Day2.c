#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to sum all even numbers in an array
int sum_even(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

// Function to print first and last element
void print_first_last(int arr[], int n) {
    if(n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("First: %d, Last: %d\n", arr[0], arr[n-1]);
}

// Function to check if two arrays are equal (frequency based)
bool are_equal(int arr1[], int n1, int arr2[], int n2) {
    if(n1 != n2) return false;
    int freq1[MAX_SIZE] = {0}, freq2[MAX_SIZE] = {0};
    for(int i = 0; i < n1; i++) freq1[arr1[i]+50]++; // Offset for negative numbers
    for(int i = 0; i < n2; i++) freq2[arr2[i]+50]++;
    for(int i = 0; i < MAX_SIZE; i++)
        if(freq1[i] != freq2[i]) return false;
    return true;
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Sum of All Even Numbers\n");
        printf("2. Find First and Last Element\n");
        printf("3. Check if Two Arrays are Equal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1 || choice == 2) {
            int n, arr[MAX_SIZE];
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d integers:\n", n);
            for(int i = 0; i < n; i++)
                scanf("%d", &arr[i]);
            if(choice == 1) {
                int result = sum_even(arr, n);
                printf("Sum of all even numbers: %d\n", result);
            } else {
                print_first_last(arr, n);
            }
        } else if(choice == 3) {
            int n1, n2, arr1[MAX_SIZE], arr2[MAX_SIZE];
            printf("Enter number of elements in first array: ");
            scanf("%d", &n1);
            printf("Enter %d integers for first array:\n", n1);
            for(int i = 0; i < n1; i++)
                scanf("%d", &arr1[i]);
            printf("Enter number of elements in second array: ");
            scanf("%d", &n2);
            printf("Enter %d integers for second array:\n", n2);
            for(int i = 0; i < n2; i++)
                scanf("%d", &arr2[i]);
            if(are_equal(arr1, n1, arr2, n2))
                printf("true\n");
            else
                printf("false\n");
        } else if(choice == 4) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}