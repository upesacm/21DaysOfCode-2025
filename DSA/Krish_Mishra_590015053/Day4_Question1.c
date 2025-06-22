#include <stdio.h>

int arr[100];
int size;

int main()
{
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int min_element = arr[0];
    for(int i = 0; i < size; i++){
        if(min_element > arr[i]){
            min_element = arr[i];
        }
    }
    printf("Smallest Element : %d", min_element);

    return 0;
}
