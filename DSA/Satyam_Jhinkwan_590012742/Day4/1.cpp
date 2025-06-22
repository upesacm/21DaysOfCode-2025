#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    cout << "Smallest element in the array: " << *min_element(arr.begin(), arr.end());
    return 0;
}