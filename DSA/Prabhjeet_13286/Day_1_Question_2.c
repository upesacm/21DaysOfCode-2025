/*2. Missing and Repeated
A problem that requires finding a missing number and a duplicate number in an array.
Problem Statement:
Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from
the set {1, 2, ...n} is missing and one number occurs twice in the array. The task is to find
these two numbers.
Your task: Find the missing number and the number that appears twice in the array.
Examples
Input:
[3, 1, 3]
Output:
Missing: 2, Twice: 3
Input:
[4, 3, 6, 2, 1, 1]
Output:
Missing: 5, Twice: 1*/

#include <stdio.h>

void function(int arr[], int n)
{
    int count[n + 1];
    for (int i = 0; i <= n; i++) 
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int missing = -1, repeated = -1;
    for (int i = 1; i <= n; i++) 
    {
        if (count[i] == 0)
            missing = i;
        else if (count[i] == 2)
            repeated = i;
    }
    printf("Missing: %d, Twice: %d\n", missing, repeated);
}

int main() 
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (values from 1 to %d):\n", n, n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    function (arr, n);
    return 0;
}