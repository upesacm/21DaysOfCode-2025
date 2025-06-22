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
    int count[n + 1]; 
    for (int i = 0; i <= n; i++) 
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) 
    {
        count[nums[i]]++;
    }
    int missing = -1, repeated = -1;
    for (int i = 1; i <= n; i++) 
    {
        if (count[i] == 0) {
            missing = i;
        } else if (count[i] == 2) {
            repeated = i;
        }
    }
    printf("Missing: %d, Twice: %d\n", missing, repeated);
return 0;
}
