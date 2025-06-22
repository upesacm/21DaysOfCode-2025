#include <stdio.h>
// Function to calculate the sum of elements in the array
int sum_of_elements(int limit,int arr2[]);
int main(){
int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int arr1[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array: \n");
for(int i=0;i<n;++i)
{
 scanf("%d",&arr1[i]);
}

// Call the function and display the sum
printf("The sum of the elements of the array is: %d ",sum_of_elements(n,arr1));
}

// Computes and returns the sum of array elements
int sum_of_elements(int limit,int arr2[]){
int sum=0;
for(int i=0;i<limit;++i){
sum+=arr2[i];
}
return sum;
}
