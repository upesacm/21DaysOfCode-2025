#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int nums[n];
    printf("enter the elements to the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("original array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d,",nums[i]);
    }
    printf("\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
    }
    printf("sum is %d\n",sum);
    return 0;
}
