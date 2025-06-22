#include <stdio.h>
int remove_element(int nums[],int n,int val);

int main(){
int n,val;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

// Prompt the user to enter the the value to be removed
printf("Enter the value to remove:\n");
scanf("%d",&val);

int len=remove_element(nums,n,val);
printf("New length of the array: %d\n",len);
return 0;
}

// Removes all occurrences of val from the array and returns the new length
int remove_element(int nums[],int n,int val){
int j=0;
for(int i=0;i<n;++i){
if(nums[i]!=val){
nums[j]=nums[i];
++j;
}
}
return j; // New size of array
}
