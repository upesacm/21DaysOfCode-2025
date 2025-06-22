//Code by SakshamDwivedi_590013147
#include <stdio.h>

int findMax(int[], int);

int arr[] = {-3, -2, -1, -4, 5};

int main(){
    int fmax = findMax(arr, 4);
    printf("%d", fmax);
    return 0;
}
//Fixes I made :
//Max is uninitialized, it should be arr[0] in order to be initialized as the first element.
//max will be a garbage value, which is the incorrect behaviour.
int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
       {
            max = arr[i];
        }
    }
    return max;
}
