#include <stdio.h>
int check_equal(int arr1[],int arr2[],int n1,int n2);
void sort(int arr[],int size);

int main(){
int n1,n2;

// Read sizes of both arrays
printf("Enter the size of the array1:\n");
scanf("%d",&n1);
printf("Enter the size of the array2:\n");
scanf("%d",&n2);
int nums1[n1];
int nums2[n2];

// Prompt the user to enter the elements of both the arrays if they are equal in frequency
if(n1==n2){
printf("Enter the elements of the array1: \n");
for(int i=0;i<n1;++i)
{
 scanf("%d",&nums1[i]);
}

printf("Enter the elements of the array2: \n");
for(int i=0;i<n2;++i)
{
 scanf("%d",&nums2[i]);
}

// Check equality and print result
if(check_equal(nums1,nums2,n1,n2)==1)
printf("The arrays are equal.");
else
printf("The arrays are not equal.");
return 0;
}

else
printf("The arrays are not equal.");
return 0;
}

// Returns 1 if arrays are equal in content, otherwise 0
int check_equal(int arr1[],int arr2[],int n1,int n2){
sort(arr1,n1);
sort(arr2,n2);
for(int i=0;i<n1;++i){
if(arr1[i]!= arr2[i]) return 0;
}
return 1;
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

