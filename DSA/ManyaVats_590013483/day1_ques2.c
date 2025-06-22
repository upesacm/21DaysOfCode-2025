#include <stdio.h>
int main() {
    int nums[] = {3, 1, 3};  
    int n = 3;

    int count[4] = {0};  

    for (int i = 0; i < n; i++) {
        count[nums[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            printf("Missing: %d\n", i);
        }
        if (count[i] == 2) {
            printf("Twice: %d\n", i);
        }
    }
  return 0;
}
