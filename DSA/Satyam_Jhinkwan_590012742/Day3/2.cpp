#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in the array:\n";
    for (auto &x : arr)
        cin >> x;
    unordered_set<int> seen;
    for (int x : arr)
    {
        if (seen.count(x))
        {
            cout << "true";
            return 0;
        }
        seen.insert(x);
    }

    cout << "false";

    return 0;
}