int findMax(int arr[], int n) 
{
  if (n<=0)
        throw std::invalid_argument("Array is empty");
  int max=arr[0];
  for (int i=1; i<n; i++) 
    {
        if (arr[i]>max) 
        {
            max=arr[i];
        }
    }
    return max;
}
