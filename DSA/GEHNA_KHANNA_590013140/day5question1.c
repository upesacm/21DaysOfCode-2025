#include <stdio.h>
int main() 
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
             printf("%d is unique element \n", arr[i]);
        }
    }
    return 0; 
}
