
#include <stdio.h>

int main() {
    int nums[] = {4, 5, 6, 4};
    int size = 4;
    int i, j;
    int duplicate = 0;

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(nums[i] == nums[j]) {
                duplicate = 1;
            }
        }
    }

    if(duplicate) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
