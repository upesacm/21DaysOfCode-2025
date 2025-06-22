#include <stdio.h>
void sort(int arr[],int size);
int check_duplicates(int nums2[],int limit);

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

if(check_duplicates(nums,n)==1)
printf("True\n");
else
printf("False\n");

return 0;
}

int check_duplicates(int nums2[],int limit){
sort(nums2,limit);
for(int i=0;i<limit-1;++i){
if(nums2[i]==nums2[i+1])
return 1;
}
return 0;
}

// Insertion sort to sort the array
void sort(int arr[],int size){
for(int i=1;i<size;++i){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
}
