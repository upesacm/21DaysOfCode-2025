#include <stdio.h>
int main() {
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int nums[n];  
    printf("Enter %d numbers between 1 to %d:\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int count[n]; 
    int missing = 0, twice = 0;
    
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        count[nums[i]]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            missing = i;
        } else if (count[i] == 2) {
            twice = i;
        }
    }
    
    printf("Missing: %d, twice: %d\n", missing, twice);
    
    return 0;
}
