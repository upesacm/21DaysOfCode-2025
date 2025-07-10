#include <stdio.h>
#include <stdbool.h>
bool matrix(int arr[][100], int r, int c, int target){
    int i=0, j=c-1;
    while(i<r && j>=0){
        if(arr[i][j]==target)
            return true;
        else if(arr[i][j]>target)
            j--;
        else
            i++;
    }
    return false;
}

int main(){
    int r, c, target;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int arr[100][100];
    printf("Enter the matrix elements:\n");
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &arr[i][j]);
    printf("Target: ");
    scanf("%d", &target);

    if(matrix(arr, r, c, target))
        printf("True");
    else
        printf("False");

    return 0;
}
