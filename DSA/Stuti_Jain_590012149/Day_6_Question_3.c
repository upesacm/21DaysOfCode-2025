#include<stdio.h>
int n,i;
int main() {
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int length=1;
    int condition=1;

    for(i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            condition++;
            if(condition>length){
            length=condition;
            }
        }
        else{
            condition=1;
        }}

        printf("The length of the array is :%d", length);

        return 0;
    }

      
