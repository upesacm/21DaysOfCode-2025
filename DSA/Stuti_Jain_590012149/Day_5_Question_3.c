#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    bool Palindrome=true;

    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-1-i]){
            Palindrome=false;
            break;
        }
    }

    if(Palindrome){
        printf("true\n");
    } 
    else {
        printf("false\n");
    }

    return 0;
}
