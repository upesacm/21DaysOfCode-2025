#include <stdio.h>
#include <stdlib.h>

int calculateSum(int *array, int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += array[i];
    }
    return sum;
}

int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    
    if (array == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &array[i]);
    }

    int sum = calculateSum(array, size);
    printf("Sum of the array elements: %d\n", sum);

    free(array);
    return 0;
}
