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
    for (auto x : arr)
        result ^= x;
    cout << "Output: " << result;

    return 0;
}