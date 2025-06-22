#include<iostream>
using namespace std;


int sumEven(int arr[],int n)
{
    int sum=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }

    return sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};

    cout << "Sum of all even numbers present in the array is: "  << sumEven(arr,5);//size=5

    return 0;
}
