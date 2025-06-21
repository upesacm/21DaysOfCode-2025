#include <stdio.h>
int longest_consecutive_subarray(int arr[],int n);

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

int result=longest_consecutive_subarray(nums,n);
printf("Length of the longest consecutive increasing subarray is: %d\n",result);
return 0;
}


// Returns the length of the longest consecutive increasing subarray
int longest_consecutive_subarray(int arr[],int n){
if(n==0) return 0;
int max_len=1,cur_len=1;
for(int i=1;i<n;++i){
if(arr[i]==arr[i-1]+1)
cur_len++;
else
cur_len=1;
if(cur_len>max_len)
max_len=cur_len;
}
return max_len;
}

