#include <stdio.h>

int main() {
    int n, num, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(i == 0 || num < min)
            min = num;
    }
    printf("%d\n", min);
    return 0;
}