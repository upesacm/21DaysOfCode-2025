#include <stdio.h>
int main() 
{
    int n;
    int k;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int nums[n];
    int nums1[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("enter array rotation number\n");
    scanf("%d",&k);
    int k1=n-k;
    int j=0;
    for(int i=k1;i<n;i++)
    {
        nums1[j]=nums[i];
        j++;
    }
    for(int i=0;i<k1;i++)
    {
        nums1[j]=nums[i];
        j++;
    }
    printf("array after rotation\n");
    for(int i = 0; i < n; i++) {
        printf("%d,", nums1[i]);
    }
    return 0;
}



