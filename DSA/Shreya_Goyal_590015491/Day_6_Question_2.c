#include <stdio.h>

int main() {
int arr[5], i;

printf("Enter 5 numbers:\n");
for(i=0; i<5; i++) {
    scanf("%d", &arr[i]);
}

for(i=0; i<4; i++) {
    if(arr[i] >= arr[i + 1]) {
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}
return 0;
}
