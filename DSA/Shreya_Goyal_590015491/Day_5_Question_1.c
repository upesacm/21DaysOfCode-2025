#include <stdio.h>

int main() {
    int arr[5],i,j;

printf("Enter 5 numbers:\n");
for(i=0; i<5; i++) {
    scanf("%d", &arr[i]);
}

for(i=0; i<5; i++) {
    int c=0;

    for(j=0; j<5; j++) {
        if(arr[i] == arr[j]) {
            c++;
        }
    }

    if(c==1) {
        printf("Unique element: %d\n", arr[i]);
        break;
    }
}

return 0;
}
