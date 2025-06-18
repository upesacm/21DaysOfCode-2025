#include<stdio.h>
int n, i;
int main() {
    printf("Enter the number of integers you want: \n");
    scanf("%d", &n);

    int arr[n];

printf("Enter the integers: \n");
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

    printf("First: %d, Last : %d\n", arr[0], arr[n-1]);
    printf("%d,%d\n", arr[0],arr[n-1]);

}
