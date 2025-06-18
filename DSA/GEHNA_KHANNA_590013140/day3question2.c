#include <stdio.h>
int main() 
{
    int n;
    int c=0;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                printf("true\n"); 
                c++;
            }
        }
    }
        if(c==0)
        {
            printf("false\n");
        }
    
    return 0;
}
