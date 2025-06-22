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
    int esum=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]%2==0)
        esum=esum+nums[i];
    }
    printf("sum of even numbers is %d\n",esum);
return 0;
}
