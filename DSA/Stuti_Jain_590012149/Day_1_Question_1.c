#include<stdio.h>
int n, i,j=0;
int main() {
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]<=0){
            arr[i]=0;
           
    }
}
    for(i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    return 0;

}
