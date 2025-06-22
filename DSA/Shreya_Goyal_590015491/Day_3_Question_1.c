#include <stdio.h>

int main() {
    int arr[10];
    int i, j, c, k, sum = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Value of k: ");
    scanf("%d", &k);

    for(i = 0; i < 10; i++) {
        c = 0;

        int Counted = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                Counted = 1;
                break;
            }
        }

        if(Counted == 1) {
            continue;
        }

        for(j = 0; j < 10; j++) {
            if(arr[i] == arr[j]) {
                c++;
            }
        }

        if(c == k) {
            sum += arr[i];
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
