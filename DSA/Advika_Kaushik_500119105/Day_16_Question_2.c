#include<stdio.h>
int main(){
    int size, target, i, count=0;
    printf("Enter the number of elements:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n",size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Target:");
    scanf("%d", &target);

    for(i=0; i<size; i++){
        if(arr[i]==target){
            count++;
        }
    }

    printf("%d", count);


    return 0;
}
