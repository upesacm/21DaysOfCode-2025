#include<stdio.h>
int main()
{
    int n;
    int c=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int nums[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int k;
    printf("enter frequency\n");
    scanf("%d",&k);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        int alreadyCounted = 0;
        for (int j = 0; j < i; j++) {
            if (nums[i] == nums[j]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted)
            continue;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == k) {
            sum += nums[i];
        }
    }
    printf("Sum of elements that appear exactly %d times: %d\n", k, sum);
    return 0;
}
