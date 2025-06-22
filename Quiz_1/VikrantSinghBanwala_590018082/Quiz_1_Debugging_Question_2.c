/*1. Bug:
Variable max is declared but not initialized.
Comparing uninitialized max with arr[i] causes undefined behavior.

2. Incorrect Behavior:
May return a garbage value or incorrect result depending on whatever random value is in max.
Sometimes might even miss the actual maximum if max starts off as a large garbage number.
*/
int findMax(int arr[],int n) 
{
    int max=arr[0];
    for(int i=1;i<n;i++) 
    {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
    }
    return max;
}