#include <stdio.h>

int main() {
    int arr[4] ,i, val, nl = 0;

    printf("Enter 4 numbers:\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Val: ");
    scanf("%d", &val);

    for(i = 0; i < 4; i++) {
        if(arr[i] != val) {
            arr[nl] = arr[i];
            nl++;
        }
    }

    printf("New length: %d\n", nl);

return 0;
}

