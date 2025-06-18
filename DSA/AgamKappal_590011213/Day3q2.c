
#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 2};
    int n = 4;
    int i, j, found = 0;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                found = 1;
            }
        }
    }

    if(found) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
