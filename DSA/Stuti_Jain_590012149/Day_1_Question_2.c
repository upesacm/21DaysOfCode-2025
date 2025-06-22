#include<stdio.h>
int i, n;
int main() {
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int arr[n];
    int freq[n+1];

    for(i=0; i<n; i++){
        freq[i]=0;
    }

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        freq[arr[i]]++;

    }

    int missing=0;
    int repeated=0;

    for(i=1; i<=n; i++){
        if(freq[i]==0){
        missing=i;
    }
        else if(freq[i]==2){
        repeated=i;
    }
    }

    printf("The missing elements is: %d\n", missing);
    printf("The repeated element is: %d\n", repeated);


}
