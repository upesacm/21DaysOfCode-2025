#include <stdio.h>
void sort(int arr[],int size);

int main(){
int n,k,sum=0;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array: \n");
for(int i=0;i<n;++i)
{
 scanf("%d",&nums[i]);
}

// Prompt the user to enter the frequency of the number
printf("Enter the value of the frequency of the number: \n");
scanf("%d",&k);

sort(nums,n);//Sort the array

// Traverse and count frequencies
for(int i=0;i<n;){
int count=1;
for(int j=i+1;j<n;++j){
if(nums[j]==nums[i])
++count;
else
break;
}

//Check and add elements with the correct frequency
if(count==k)
sum+=nums[i];
i=i+count;// Skip to next unique element
}

printf("The sum of all distinct elements that appear exactly %d times in the array is: %d\n",k,sum);
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

