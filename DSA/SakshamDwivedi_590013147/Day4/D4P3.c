/*This is my personal favourite one. Here what happens is that the original elements of the array are replaced with the desired elements and to keep the array 
the same way length is decreased according to the number of undesired elements [Code by Saksham Dwivedi (Comments added later)]*/
#include <stdio.h>

int arr[100];
int num;
int size;

int main()
{
    printf("Enter the size of the array (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number : ");
    scanf("%d", &num);

    int length = size;
    int j = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] != num){
            arr[j] = arr[i];
            j++;
        }
        else{
            length--;
        }
    }
    size = length;
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
