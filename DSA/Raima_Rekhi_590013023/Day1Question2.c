#include <stdio.h>

void find_Missing_And_Repeating(int arr[],int n);
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
find_Missing_And_Repeating(arr1,n);
}

// Function which finds and prints the missing and repeating numbers in the array using frequency counting.
void find_Missing_And_Repeating(int arr[],int n){
int count[n+1]; // count[0] will be unused
for(int i=0;i<=n;++i){
count[i]=0;
}
// Count the frequency of each number
for(int i=0;i<n;++i){
count[arr[i]]++;
}

int missing=-1,repeating=-1;
for(int i=1;i<=n;++i){
if(count[i]==0){
missing=i;
}
else if(count[i]==2){
repeating=i;
}
}

printf("Number repeating twice: %d\n", repeating);
printf("Missing number: %d\n", missing);
}

