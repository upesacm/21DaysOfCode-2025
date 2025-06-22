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
    int k;
    printf("enter value of k\n");
    scanf("%d",&k);
    int a[n];
    int c=n-k;
    int j=0;
    for(int i=c;i<n;i++)
    {
        a[j]=nums[i];
        j++;
    }
    for(int i=0;i<c;i++)
    {
        a[j]=nums[i];
        j++;
    }
    
    printf("rotated array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }

return 0;
}
