#include <stdio.h>

int main() 
{
    int n1, n2, i, j, isEqual = 1;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    if (n1 != n2) 
    {
        printf("false\n");
        return 0;
    }

    int nums1[n1], nums2[n2];
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &nums1[i]);
    }
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &nums2[i]);
    }

    int visited[n2];
    for(i = 0; i < n2; i++) visited[i] = 0;

    for(i = 0; i < n1; i++) 
    {
        int found = 0;
        for(j = 0; j < n2; j++) 
        {
            if(nums1[i] == nums2[j] && !visited[j]) 
            {
                visited[j] = 1;
                found = 1;
                break;
            }
        }
        if(!found) 
        {
            isEqual = 0;
            break;
        }
    }

    if(isEqual)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}