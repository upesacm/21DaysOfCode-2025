#include<stdio.h>
#define Size 5// size of array can be defined according to us
int main(){
    int array[Size],sum = 0,i;

    printf("Enter the elements:\n");
    for (i = 0; i < Size; i++) {
        scanf("%d", &array[i]);
    }
  for (i = 0; i < Size; i++) {
        if (array[i] % 2 == 0) {
            sum = sum + array[i];
        }
    }
     printf("Sum of  even numbers in array = %d\n", sum);

    return 0;
}
