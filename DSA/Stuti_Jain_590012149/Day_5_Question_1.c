#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[1000]={0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    printf("Elements that appear only once: \n");
    for(int i=0; i<n; i++){
        if(freq[arr[i]]==1){
            printf("%d ", arr[i]);
            freq[arr[i]]=0;
        }
    }
    return 0;
}
