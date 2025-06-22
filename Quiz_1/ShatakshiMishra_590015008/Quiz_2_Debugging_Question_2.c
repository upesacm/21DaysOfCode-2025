//Task 1
Max is idenitified but not declared which causes a garbage value to be declared in max.

//Task 2
It produces some unwanted very large number as result in the range of int.

//Task 3
int findMax(int arr[], int n) 
{
    int max = arr[0];  
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
