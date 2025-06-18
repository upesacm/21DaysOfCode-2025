#include<stdio.h>
int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("First element of array is %d\n",arr[0]);
    printf("last element of array is %d\n",arr[n-1]);
}
