#include <stdio.h>

int arr[100];
int k;
int size;

int main()
{
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations : ");
    scanf("%d", &k);

    for(int i = 0; i < k; i++){
        int temp = arr[size - 1];
        for(int j = 0; j < size; j++){
            arr[size - 1 - j] = arr[size - 2 - j];
        }
        arr[0] = temp;
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
