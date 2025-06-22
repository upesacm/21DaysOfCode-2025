#include<stdio.h>

int sumofevennumbers(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: \n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    int evensum = sumofevennumbers(arr,size);
    printf("\nTHE SUM OF EVEN NUMBERS IN THE ARRAY IS : %d\n",evensum);
    return 0;
}