#include<stdio.h>
int n, i, sum=0;
int main() {
    printf("Enter the number of integers you want: \n");
    scanf("%d", &n);

int arr[n];

printf("Enter the integers: \n");
for (i=0; i<n; i++){
scanf("%d", &arr[i]);
}

for(i=0; i<n; i++){
if(arr[i] % 2 == 0){
    sum=sum+arr[i];
}}

printf("The sum of all the even numbers in the input array of integers is: %d\n", sum);

return 0;
}
