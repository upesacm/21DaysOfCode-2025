#include<stdio.h>
int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("duplicate elements is %d\n",arr[i]);
                break;

            }
        }
        
    }
    return 0;
}
       
