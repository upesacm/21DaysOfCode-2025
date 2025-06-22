/* This logic takes the approach of taking the last element and storing it in a temp variable and swapping other elements with their previous ones then later 
element at index 0 is replaced with the last element which was stored in temp giving an illusion of rotation. [Code by Saksham Dwivedi (Comments added later)]*/
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
