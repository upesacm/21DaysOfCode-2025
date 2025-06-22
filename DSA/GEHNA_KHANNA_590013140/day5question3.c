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
    int j=n-1;
    int c=0;
    for(int i=0;i<n/2;i++)
    {
        if(nums[i]==nums[j])
        c++;
        j--;
    }
    int l=n/2;
    if(c==l)
    printf("true");
    else
    printf("false");
return 0;
}
