#include<iostream>
using namespace std;


pair<int,int> FirstLast(int arr[],int n)
{
    return {arr[0],arr[n-1]};
}


int main()
{
    //int arr[4]={1,2,3,4};

    int arr[]={7};

    pair<int,int> ans=FirstLast(arr,1);

    cout << "First and Last element of the array is: " << ans.first << " " << ans.second << endl;

    return 0;
}