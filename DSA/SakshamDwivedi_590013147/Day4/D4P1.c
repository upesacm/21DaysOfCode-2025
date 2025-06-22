/*This program takes the minimum element approach, pretty much what we do during Selection Sort. Here min_element is the first element which is compared to the 
other elements and the value is changed to the compared value if the compared value is smaller [Code by Saksham Dwivedi (Comments added later)]*/
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
