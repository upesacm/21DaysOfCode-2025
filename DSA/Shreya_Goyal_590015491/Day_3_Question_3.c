#include <stdio.h>

int main() {
    int arr[5];
    int i;
    int l = -1;
    int sl = -1;

    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++) {
        if(arr[i] > l) {
            l=arr[i];
        }
    }

    for(i=0; i<5; i++) {
        if(arr[i] > sl && arr[i] < l) {
            sl = arr[i];
        }
    }

    if(sl==-1) {
        printf("-1\n");
    } else {
        printf("Second largest number: %d\n", sl);
    }

return 0;
}
