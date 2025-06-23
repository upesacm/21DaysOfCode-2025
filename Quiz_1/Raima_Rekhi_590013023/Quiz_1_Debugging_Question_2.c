//1. The variable max is declared but not initialized. In C, local variables have undefined (garbage) values if not initialized.

//2. The loop may never enter the if block if max starts with a very large garbage value.
//As a result, it might produce aan incorrect value which is not the maximum element

//3. Rewrite the corrected version of the function 
#include <stdio.h>
int findMax(int arr[], int n); 
int main(){
int n;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

int result=findMax(nums,n);
printf("Maximum element in the array: %d\n",result);
return 0;
}

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

