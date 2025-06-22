#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, result = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}