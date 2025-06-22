/*1. K-Frequency Element Sum
A problem that combines frequency counting with conditional summation of distinct
elements.
Problem Statement:
Given an array of integers nums and an integer k, find the sum of all distinct elements that
appear exactly k times in the array. Each such element should be included only once in the
sum.
This problem teaches you to apply frequency maps and conditional filtering, helping you
extract meaningful insights based on occurrence constraints.
Your task:
Find the sum of all distinct elements that appear exactly k times in the array.
Examples
Input:
nums = [2, 3, 9, 9], k = 1
Output:
5
Input:
nums = [1, 8, 8, 8, 5, 6, 2], k = 3
Output:
8*/
#include <stdio.h>

int function(int nums[], int size, int k)
{
    int freq[100] = {0};  
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        freq[nums[i]]++;
    }

    for (int i = 0; i < 100; i++) 
    {
        if (freq[i] == k) 
        {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = function(nums, n, k);
    printf("Output: %d\n", result);
    return 0;
}