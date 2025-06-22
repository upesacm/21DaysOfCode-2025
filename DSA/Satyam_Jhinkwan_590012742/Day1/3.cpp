#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "sum of all elements in the array: " << sum;

    return 0;
}