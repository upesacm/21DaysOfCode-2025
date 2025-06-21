#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
    return 0;
}