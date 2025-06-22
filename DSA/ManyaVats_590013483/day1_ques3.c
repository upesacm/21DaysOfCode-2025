#include <stdio.h>
int main() {
    int nums[] = {10, 20, 30};  
    int n = 3;                     
    int sum = 0;                  

    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}
