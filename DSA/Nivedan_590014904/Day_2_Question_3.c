#include<stdio.h>
int comparearr(int arr[],int new[],int n1,int n2){
    if (n1 != n2){
        return 0;
    }
 int same[n1];
 for(int i=0;i<n1;i++){
    same[i]=0;
 }
 for(int i= 0;i<n1;i++){
    int exist=0;
    for (int j=0;j<n2;j++){
        if(arr[i] == new[j] && same[j] == 0){
            same[j] = 1;
            exist= 1;
            break;
        }
    }
    if (exist == 0){
        return 0;
    }
 }   
 return 1;
}
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int new[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &new[i]);
    }

    if (comparearr(arr1, new, n1, n2)) {
        printf("Arrays are equal\n");
    } else {
        printf("Arrays are not equal\n");
    }

    return 0;
}
