#include <stdio.h>
 
int main()
{
    int size;
    printf("enter size of the array \n");
    scanf("%d",&size);

    int arr[size];
    printf("enter array elements\n");

    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int sum=0;

    for(int i=0;i<size;i++)
    sum+=arr[i];
 
    printf("sum of elements of array is %d \n",sum);
    return 0;
}
