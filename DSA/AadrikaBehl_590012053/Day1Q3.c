<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

printf("Sum of array elements: %d\n", sum);

return 0;
}
=======
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

printf("Sum of array elements: %d\n", sum);

return 0;
}
>>>>>>> c12f72c2ed57249c3c3036402629da8d54f48739
