#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int n) 
{
    int max;//yaha galti hai
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) // aagar max me kuch me aap value nhi daaloge to jiss address pe vo stored hoga usi se compare karega aur vo number bohot bdha hota hai 
       {
            max = arr[i];
        }
    }
    return max;
}

// my solution
int findMax(int arr[], int n) 
{
    int max=INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
       {
            max = arr[i];
        }
    }
    return max;
}