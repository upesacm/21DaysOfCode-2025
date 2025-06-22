#include <stdio.h>
void secondlar(int n, int arr[]) {
    int larg = 0, seclarg = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > larg) {
            seclarg = larg;
            larg = arr[i];
        } else if (arr[i] > seclarg && arr[i] != larg) {
            seclarg = arr[i];
        }
    }
printf("The second largest number is %d",seclarg);
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
secondlar(n,arr);
}
