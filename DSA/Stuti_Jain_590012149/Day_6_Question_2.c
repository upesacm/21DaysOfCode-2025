#include<stdio.h>
int i, n;
int main() {
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int count=1;

    for(i=0; i<n-1; i++){
        if(arr[i]>=arr[i+1]){
            count=0;
            break;
        }}

        if(count){
            printf("True");    
        }
        else{
            printf("False");
        }
    
    return 0;
}
