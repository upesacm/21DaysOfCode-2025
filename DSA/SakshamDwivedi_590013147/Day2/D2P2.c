#include <stdio.h>

int size;
int arr[100];

int main(){
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("First Element : %d, Last element : %d", arr[0], arr[size-1]);

    return 0;

}
