#include <stdio.h>

int main() 
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    if(size < 0) 
    {
        printf("Invalid size. Please Make Sure to enter Size > 0\n");
        return 1;
    }
    if(size == 0) 
    {
        printf("Empty Array.\n");
        return 0;
    }
    if(size == 1) {
        printf("True. Array is a Palindrome.\n");
        return 0;
    }

    int arr[size];
    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = size - 1;
    while(start < end) 
    {
        if(arr[start] != arr[end]) 
        {
            printf("False. Array is not a Palindrome.\n");
            return 0;
        }
        start++;
        end--;
    }
    printf("True. Array is a Palindrome.\n");
    return 0;
}