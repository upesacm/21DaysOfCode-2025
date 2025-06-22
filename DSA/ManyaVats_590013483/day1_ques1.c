#include <stdio.h>
int main() {
    int nums[] = {3, 2, -44, 6, -10};   
    int n = 5;                        
  
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;              
        }
    }
   printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
