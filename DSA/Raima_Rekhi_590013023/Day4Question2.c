#include<stdio.h>
void rotate_array(int nums[], int n, int k);

int main(){
int n,k;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

// Prompt the user to enter the rotation step count
printf("Enter the number of steps to rotate:\n");
scanf("%d",&k);
rotate_array(nums,n,k);

// Print the rotated array
printf("Rotated array:\n");
for(int i=0;i<n;++i){
printf("%d ",nums[i]);
}
return 0;
}

// Function to rotate the array to the right by k steps
void rotate_array(int nums[],int n,int k){
int rotated[n];
k=k%n;
for(int i=0;i<n;++i){
rotated[(i+k)%n]=nums[i];
}
for(int i=0;i<n;++i){
nums[i]=rotated[i];
}
}
