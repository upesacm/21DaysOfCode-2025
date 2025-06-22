# Sum of All Even Numbers
#include <stdio.h>

int main() {
    int n, sum = 0, num;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0)
            sum += num;
    }
    printf("%d\n", sum);
    return 0;
}