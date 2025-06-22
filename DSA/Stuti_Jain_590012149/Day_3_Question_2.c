#include<stdio.h>
int duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(duplicate(arr,n)){
        printf("True, Duplicate exists)\n");
    }
    else{
        printf("False, All elements are unique)\n");
    }

    return 0;
}
