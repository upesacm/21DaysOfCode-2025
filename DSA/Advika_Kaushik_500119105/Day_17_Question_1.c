#include <stdio.h>
int bs(int arr[], int low, int high, int x){
    if(high<low) return -1;
    int mid=low+(high-low)/2;

    if(arr[mid]==x) return mid;
    if(arr[mid]>x) return bs(arr, low, mid-1,x);

    return bs(arr, mid+1, high,x);
}

int main(){
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n",n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Target: \n");
    scanf("%d", &x);

    int result=bs(arr, 0,n-1,x);

    if(result!=-1)
        printf("%d",result);
    else
        printf("Element not found\n");

    return 0;
}
