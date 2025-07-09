#include <stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int divide(int arr[],int start,int end){
    int key=arr[end];
    int i=start;
    int j;
    for(j=start;j<end;j++){
        if(arr[j]<key){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[end]);
    return i;
}

void qsort(int arr[],int start,int end){
    if(start<end){
        int p=divide(arr, start,end);
        qsort(arr, start,p-1);
        qsort(arr, p+1, end);
    }
}

int main(){
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n",n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, 0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
