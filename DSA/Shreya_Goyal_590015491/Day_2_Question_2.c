#include <stdio.h>

int main() {
    int arr[5];
    int i;
        
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++){
     scanf("%d", &arr[i]);
    }

printf("First:%d , Last:%d \n",arr[0],arr[4]);

return 0;
}