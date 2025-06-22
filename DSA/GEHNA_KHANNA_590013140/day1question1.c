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
    printf("Entered array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
    }
    printf("New array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
