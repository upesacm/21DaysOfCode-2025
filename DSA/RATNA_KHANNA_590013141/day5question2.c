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
         for (int i = 0; i < n-1; i++) 
     {
        for (int j = i + 1; j < n; j++) 
        {
            if (nums[i] > nums[j]) 
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
      for(int i = 0; i <= n; i++) {
        if(nums[i] != i) {
            printf("Missing number is: %d\n", i);
            return 0;
        }
    }
return 0;
}
