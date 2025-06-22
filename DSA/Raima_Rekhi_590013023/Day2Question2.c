#include <stdio.h>
// Define a struct to hold a pair of integers (first and last elements)
typedef struct{
int first;
int last;
}Pair;

Pair get_first_and_last(int arr[],int limit);
int main(){
int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array: \n");
for(int i=0;i<n;++i)
{
 scanf("%d",&nums[i]);
}

Pair p=get_first_and_last(nums,n);
printf("First: %d , Last: %d ",p.first,p.last);
return 0;
}

// Function to return first and last elements of the array
Pair get_first_and_last(int arr[],int limit){
Pair result;
result.first=arr[0];
result.last=arr[limit-1];
return result;
}
