#include<stdio.h>
int eremove(int arr[], int n, int val){
int i, j=0, len;                                                    //j=valid elements
for(i=0; i<n; i++){
    if(arr[i]!=val){
        arr[j]=arr[i];
        j++;
    }
}
return j;
}

int i, n, val, len;
int main() {
    printf("Enter the number of elements you want: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value that you want to remove (Vaal): \n");
    scanf("%d", &val);

    len=eremove(arr, n, val);
    printf("The new length is: %d\n", len);

    return 0;
}
