#include <stdio.h>
// Replaces all negative numbers in the array with 0 (modifies in-place)
void modify(int limit,int brr[]);
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

// Display the modified array
printf("The modified array with all the negative numbers replaced with zero is:\n");
modify(n,nums);
for(int i=0;i<n;++i){
printf("%d  ",nums[i]);
}
return 0;
}

// Function to replace negative numbers with 0
void modify(int limit,int brr[]){
for(int i=0;i<limit;++i){
if(brr[i]<0){
brr[i]=0;// Replace negative number with 0
}
}
}
