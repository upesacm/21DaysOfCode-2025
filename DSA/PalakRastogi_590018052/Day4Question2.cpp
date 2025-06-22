#include<iostream>
#include<vector>
using namespace std;


void rotateArray(vector<int> &arr, int steps)
{
    int k=0;

    while(k<steps)
    {
        int element=arr[arr.size()-1];
        for(int i=arr.size()-2; i>=0; i--)
        {
              arr[i+1]=arr[i];
        }

        arr[0]=element;
        k++;
    }
}

int main()
{
    vector<int> arr={1,2,3,4,5};

    cout << "Before" << endl;

    for(auto val : arr)
    {
        cout << val << " ";
    }

    rotateArray(arr,2);

    cout << "After" << endl;

    for(auto val : arr)
    {
        cout << val << " ";
    }
}