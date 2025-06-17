#include <stdio.h>

int main() {
    int arr1[5];
    int arr2[5]; 
    int i;
        
    printf("Enter 5 elements for array 1:\n");
    for(i=0; i<5; i++){
     scanf("%d", &arr1[i]);
    }
    
    printf("Enter 5 elements for array 2:\n");
    for(i=0; i<5; i++){
     scanf("%d", &arr2[i]);
    }

    for(i=0; i<5; i++){
        if (arr1[i]==arr2[i]){
        printf("True");
        }
        else{
            printf("False");
        }
    }

return 0;
}