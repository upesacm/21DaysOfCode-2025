#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, val;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    cout << "Enter the value : ";
    cin >> val;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != val)
            arr[i++] = arr[j];
    }
    cout << "Length of the new array: " << i;
    return 0;
}