/*3. Check if Two Arrays are Equal
A problem that introduces frequency counting and comparison techniques for data structure
equality.
Problem Statement:
Given two arrays, determine if both contain the same elements with the same frequency,
regardless of their order. Return true if they are equal, else return false.
This problem introduces you to frequency counting and comparison techniques, which are
essential for understanding how to compare data structures and verify equality beyond simple
element-by-element comparison.
Your task: Determine if two arrays contain the same elements with the same frequencies.
Examples
Input:
nums1 = [1, 2, 3, 4], nums2 = [4, 3, 2, 1]
Output:
true
Input:
nums1 = [1, 2, 2, 3], nums2 = [1, 2, 3, 3]
Output:
false
Input:
nums1 = [1, 2, 3], nums2 = [1, 2, 3, 4]
Output:
false*/
#include <stdio.h>

int main() {
    int size1, size2;
    scanf("%d", &size1);
    int a[100] = {0}, freq1[100] = {0};

    for (int i = 0; i < size1; i++) {
        scanf("%d", &a[i]);
        freq1[a[i]]++;
    }

    scanf("%d", &size2);
    int b[100] = {0}, freq2[100] = {0};

    for (int i = 0; i < size2; i++) {
        scanf("%d", &b[i]);
        freq2[b[i]]++;
    }

    int same = 1;
    for (int i = 0; i < 100; i++) {
        if (freq1[i] != freq2[i]) {
            same = 0;
            break;
        }
    }

    if (same)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}