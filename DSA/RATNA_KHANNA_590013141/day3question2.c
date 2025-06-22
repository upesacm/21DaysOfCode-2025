#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);

    int nums[n];
    int freq[1001] = {0}; 

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        freq[nums[i]]++;  
    }

    int c=0;
    for(int i = 0; i <= 1000; i++) {
        if(freq[i] > 1) {
            c++; 
            break;
        }
    }
    if(c>0)
    printf("true\n");
    else
    printf("false\n");
    
    return 0;
}
