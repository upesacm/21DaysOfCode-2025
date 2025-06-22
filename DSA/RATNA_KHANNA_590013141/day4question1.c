#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in array\n");
    scanf("%d",&n);
    int nums[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int min=nums[0];
    for(int i=0;i<n;i++)
    {
        if(nums[i]<min)
        min=nums[i];
    }
    printf("min= %d\n",min);
    return 0;
}
