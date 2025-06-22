#include <stdio.h>

int main()
{
    int n1, n2;
    printf("enter number of elements in array1\n");
    scanf("%d", &n1);
    printf("enter number of elements in array2\n");
    scanf("%d", &n2);

    int arr1[n1];
    int arr2[n2];

    printf("enter the elements to array1\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("enter the elements to array2\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);
    for (int i = 0; i < n1 - 1; i++)
        for (int j = i + 1; j < n1; j++)
            if (arr1[i] > arr1[j]) {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
    for (int i = 0; i < n2 - 1; i++)
        for (int j = i + 1; j < n2; j++)
            if (arr2[i] > arr2[j]) {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }

    int c = 0;
    if (n1 == n2) {
        for (int i = 0; i < n1; i++) {
            if (arr1[i] != arr2[i]) {
                c = 1;
                break;
            }
        }
    } else {
        c = 1; 
    }

    if (c == 0)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
