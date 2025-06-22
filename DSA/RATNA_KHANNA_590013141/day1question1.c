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
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        nums[i]=0;
    }
    printf("modified array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d,",nums[i]);
    }
    return 0;
}
