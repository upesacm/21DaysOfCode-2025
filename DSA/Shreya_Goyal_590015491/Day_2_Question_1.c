#include <stdio.h>

int main() {
    int arr[5];
    int i, sum;
        
    printf("Enter 5 elements:\n");
    for(i=0; i<5; i++){
     scanf("%d", &arr[i]);
    }
    
    sum=0;
    for(i=0; i<5; i++){
        if (arr[i]%2==0)
        sum+=arr[i];
    }

printf("Sum of array: %d\n",sum);

return 0;
}