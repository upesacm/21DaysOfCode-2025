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
     for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(nums[i]==nums[j])
            c++;
        }
       if(c==1)
       printf("unique= %d\n",nums[i]) ;
    }
    return 0;
}
