#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("\n");
    printf("sum of array is %d\n",sum);
}
