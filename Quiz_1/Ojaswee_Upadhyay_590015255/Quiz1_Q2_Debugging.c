/*int max is not initialized which leads to
undefined behaviour , can contain garbage value

if max starts as garbage value number larger
than any array element
arr[i]>max condition never comes
So function may return incorrect maximum*/
#include <stdio.h>
#include<limits.h>
int findMax(int arr[],int n){
    if(n==0){
        return INT_MIN;
    }
    int max = arr[0]; 
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
