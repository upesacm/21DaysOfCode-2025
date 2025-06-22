#include<stdio.h>
#define Size 5 // i have taken n =5

int main(){
    int array[Size],i;

    printf("Enter the elements:\n");
    for (i = 0; i < Size; i++) {
        scanf("%d", &array[i]);
    }
    

   printf("First: %d, Last : %d\n", array[0], array[Size-1]);
    printf("%d,%d\n", array[0],array[Size-1]);
    
    return 0;

}
