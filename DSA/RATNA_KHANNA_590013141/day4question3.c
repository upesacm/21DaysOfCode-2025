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
    int val;
    printf("enter value to be deleted\n");
    scanf("%d",&val);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==val)
        c++;
    }
    int new=n-c;
    printf("size of new array=%d\n",new);
return 0;
}
