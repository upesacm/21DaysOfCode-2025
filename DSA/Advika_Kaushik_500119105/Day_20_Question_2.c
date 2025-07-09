#include <stdio.h>
void merge(int a1[], int n1, int a2[], int n2, int m[]) {
    int i=0, j=0, k=0;
    
    for(k=0; i<n1 && j<n2; k++) {
        if(a1[i]<=a2[j]) {
            m[k]=a1[i];
            i++;
        } else {
            m[k]=a2[j];
            j++;
        }
    }
    for(i=i; i<n1; i++) {
        m[k]=a1[i];
        k++;
    }
    for(j=j; j<n2; j++) {
        m[k]=a2[j];
        k++;
    }
}

int main() {
    int n1, n2, i;
    int a1[100], a2[100], m[200];

    printf("Enter the size of the first array ");
    scanf("%d", &n1);
    printf("Enter the first array\n", n1);
    for(i=0; i<n1; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    printf("Enter the second array:\n", n2);
    for(i=0; i<n2; i++) {
        scanf("%d", &a2[i]);
    }

    merge(a1, n1, a2, n2, m);

    printf("Merged arrays: \n");
    for(i=0; i<n1+n2; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}
