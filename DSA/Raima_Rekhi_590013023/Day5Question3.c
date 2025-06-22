#include <stdio.h>
int is_palindrome(int arr[],int n);

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

if(is_palindrome(nums,n)==1)
printf("True\nThe array is a palindrome.\n");
else
printf("False\nThe array is not a palindrome.\n");
return 0;
}

// Function which returns 1 if the array is a palindrome, else 0
int is_palindrome(int arr[],int n){
for(int i=0;i<n/2;++i){
if(arr[i]!=arr[n-1-i]) return 0;
}
return 1;
}
