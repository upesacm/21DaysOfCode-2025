#include <stdio.h>
int size;
int  [100];
int mon = 1;
int main(){
    printf("Enter the number of elements (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < size; i++){
        if(arr[i] - arr[i-1] <= 0){
            mon = 0;
            break;
        }
        else{
            mon = 1;
        }
    }
    if(mon){
        printf("True");
    }
    else{
        printf("False");
    }
}
