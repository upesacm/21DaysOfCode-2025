#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter number of elements in array1\n");
    scanf("%d",&n1);
    printf("enter number of elements in array2\n");
    scanf("%d",&n2);
    int nums1[n1];
    int nums2[n2];
    printf("enter the elements to the array1\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&nums1[i]);
    }
    printf("enter the elements to the array2\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&nums2[i]);
    }
     for (int i = 0; i < n1 - 1; i++) 
     {
        for (int j = i + 1; j < n1; j++) 
        {
            if (nums1[i] > nums1[j]) 
            {
                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    for (int i = 0; i < n2 - 1; i++) 
    {
        for (int j = i + 1; j < n2; j++) 
        {
            if (nums2[i] > nums2[j]) 
            {
                int temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
            }
        }
    }
int c;
    
    for (int i = 0; i < n1; i++) 
    {
        if (nums1[i] != nums2[i]) 
        {
            c++;
            break;
        }
    }

    if (c == 0)
        printf("true\n");
    else
        printf("false\n");
return 0;
}
