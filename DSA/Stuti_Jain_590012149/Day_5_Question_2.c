#include<stdio.h>
int main(){
    int lim;
    printf("Enter the limit:\n");
    scanf("%d", &lim);

    int arr[lim];         
    int freq[lim+1];      

    for(int i=0; i<=lim; i++){
        freq[i] = 0;
    }

    printf("Enter %d elements (should not contain more than one missing elements):\n", lim);
    for(int i=0; i<lim; i++){
        scanf("%d", &arr[i]);
        if(arr[i] >= 0 && arr[i] <= lim){
            freq[arr[i]]++;
        }
    }

    for(int i=0; i<=lim; i++){
        if(freq[i]==0){
            printf("Missing element: %d\n", i);
            break;
        }
    }

    return 0;
}
