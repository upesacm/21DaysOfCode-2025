#include <stdio.h>
int peak(int arr[], int n){
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int left=(mid==0 || arr[mid]>=arr[mid-1]);
        int right=(mid==n-1 || arr[mid]>=arr[mid+1]);
        if(left && right)
            return mid;
        else if(mid>0 && arr[mid-1]>arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int index=peak(arr,n);
    if(index!=-1)
        printf("%d",index);
    else
        printf("No peak found in the array\n");
    return 0;
}
