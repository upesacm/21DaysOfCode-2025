#include <stdio.h>

int main() {
    int arr[5],i,min;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum number is: %d\n", min);

return 0;
}
