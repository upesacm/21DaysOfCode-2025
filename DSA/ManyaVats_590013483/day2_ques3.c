#include <stdio.h>
#define MAX 100  

int main() {
    int nums1[] = {1, 2, 2, 3};
    int nums2[] = {2, 3, 2, 1};
    int n = 4;

    int count1[MAX] = {0};
    int count2[MAX] = {0};

    
    for (int i = 0; i < n; i++) {
        count1[nums1[i]]++;
        count2[nums2[i]]++;
    }


    int same = 1; 
    for (int i = 0; i < MAX; i++) {
        if (count1[i] != count2[i]) {
            same = 0;  
            break;
        }
    }

    if (same) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
