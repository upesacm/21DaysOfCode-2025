#include <stdio.h>
#include <stdbool.h>

bool hasDuplicates(int nums[], int size) 
{
    int freq[1001] = {0};    
    for(int i = 0; i < size; i++) 
    {
        freq[nums[i]]++;
        if(freq[nums[i]] > 1) 
        {
            return true;
        }
    }    
    return false;
}
int main() 
{
    int size;    
    printf("Enter the size of array: ");
    scanf("%d", &size);    
    int nums[size];
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) 
    {
        scanf("%d", &nums[i]);
    }    
    bool result = hasDuplicates(nums, size);
    if(result) 
    {
        printf("Array has duplicates: true\n");
    } 
    else 
    {
        printf("Array has no duplicates: false\n");
    }
    return 0;
}
