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
        if (arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    printf("\n");

    printf("sum of all even numbers is %d\n",sum);
}
