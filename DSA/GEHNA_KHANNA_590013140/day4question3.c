#include <stdio.h>
int main() 
{
    int n;
    int k;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("enter value to be removed\n");
    scanf("%d",&k);

    for(int i=0;i<n;i++)
    {
       if(nums[i]==k)
       {
        n--;
       }
    }
    printf("new length of array is %d\n",n);
    return 0;
}
