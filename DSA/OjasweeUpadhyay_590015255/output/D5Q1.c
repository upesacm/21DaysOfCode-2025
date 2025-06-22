#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 100

typedef struct {
    int key;
    int count;
} HashItem;

HashItem hashTable[TABLE_SIZE];

int hash(int key) {
    return abs(key) % TABLE_SIZE;
}

void insert(int key) {
    int idx = hash(key);
    while (hashTable[idx].count != 0 && hashTable[idx].key != key) {
        idx = (idx + 1) % TABLE_SIZE;
    }
    if (hashTable[idx].count == 0) {
        hashTable[idx].key = key;
    }
    hashTable[idx].count++;
}

int getCount(int key) {
    int idx = hash(key);
    while (hashTable[idx].count != 0) {
        if (hashTable[idx].key == key) {
            return hashTable[idx].count;
        }
        idx = (idx + 1) % TABLE_SIZE;
    }
    return 0;
}

int findUnique(int* nums, int size) {
    for (int i = 0; i < size; i++) {
        insert(nums[i]);
    }
    for (int i = 0; i < size; i++) {
        if (getCount(nums[i]) == 1) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
    
    int* nums = (int*)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int uniqueElement = findUnique(nums, n);
    if (uniqueElement != -1) {
        printf("The first unique element in the array is: %d\n", uniqueElement);
    } else {
        printf("No unique element found in the array.\n");
    }
    
    free(nums);
    return 0;
    
}
