#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter Array size and Step size respectively: ";
    cin >> n >> k;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    cout << "final array: " << endl;
    for (int x : arr)
        cout << x << " ";
    return 0;
}