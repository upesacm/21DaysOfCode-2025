#include<stdio.h>
int n,i;
int seclarge(int arr[], int n){
     int largest = -1, sl = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            sl=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>sl){
            sl=arr[i];
        }

    }

    return sl;

}

int main() {
     printf("Enter how many elements you want in the array: \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements in the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int result=seclarge(arr, n);
    if (result ==-1){
        printf("Second largest unique element does not exist.\n");
    }
     else{
        printf("Second largest unique element is: %d\n", result);
    }

    return 0;
}
