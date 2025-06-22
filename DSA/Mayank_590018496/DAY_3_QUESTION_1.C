#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int count;
} Entry;

int findIndex(Entry* map, int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (map[i].key == key) return i;
    }
    return -1;
}

int kFrequencyElementSum(int* nums, int numsSize, int k) {
    Entry* freqMap = (Entry*)malloc(numsSize * sizeof(Entry));
    int mapSize = 0;

    for (int i = 0; i < numsSize; ++i) {
        int idx = findIndex(freqMap, mapSize, nums[i]);
        if (idx != -1) {
            freqMap[idx].count++;
        } else {
            freqMap[mapSize].key = nums[i];
            freqMap[mapSize].count = 1;
            mapSize++;
        }
    }

    int sum = 0;
    for (int i = 0; i < mapSize; ++i) {
        if (freqMap[i].count == k) {
            sum += freqMap[i].key;
        }
    }

    free(freqMap);
    return sum;
}

int main() {
    int nums[] = {1, 2, 2, 3, 3, 3, 4};
    int k = 2;
    int result = kFrequencyElementSum(nums, sizeof(nums)/sizeof(nums[0]), k);
    printf("Sum of elements appearing exactly %d times: %d\n", k, result);
    return 0;
}
