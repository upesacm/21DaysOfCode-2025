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
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
       if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            printf("duplicate element is %d\n",arr[i]);
            arr[i]=i+1;
            printf("missing element is %d\n",arr[i]);
        }
    }
    printf("New array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
