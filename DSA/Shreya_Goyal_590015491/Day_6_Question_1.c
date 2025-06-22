#include <stdio.h>

int main() {
    int arr[5], i, j;
    int a = 0;

printf("Enter 5 numbers: ");
for(i=0; i<5; i++) {
    scanf("%d", &arr[i]);
}

for(i=0; i<5; i++) {
    for(j=i+1; j<5; j++) {
        if(arr[i]==arr[j]) {
            printf("Duplicate number: %d\n", arr[i]);
            a = 1;
            break;
        }
    }
    if(a) {
        break;
    }
}

return 0;
}
