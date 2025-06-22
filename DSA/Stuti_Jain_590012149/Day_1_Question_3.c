#include<stdio.h>
int sum, i, n;
int main() {
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        sum+=arr[i];
    }

    printf("The sum of the elements of the array is: %d", sum);
    
    return 0;
}
