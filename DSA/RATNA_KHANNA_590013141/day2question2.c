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
    int first=nums[0];
    int last=nums[n-1];
    printf("first=%d \n",first);
    printf("last=%d \n",last);
return 0;
}
