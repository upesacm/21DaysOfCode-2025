#include<stdio.h>
int i, n, j;
int main() {
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
       }

       for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            printf("%d is a duplicate number\n", arr[i]);
            break;

        }
       }}
       return 0;
    
}
