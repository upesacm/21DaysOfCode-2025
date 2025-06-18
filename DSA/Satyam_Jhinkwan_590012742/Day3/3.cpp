#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (auto &x : arr)
        cin >> x;
    set<int> unique(arr.begin(), arr.end());

    if (unique.size() < 2)
    {
        cout << -1;
        return 0;
    }

    auto i = unique.rbegin();
    ++i;
    cout << "Second largest unique element: " << *i;

    return 0;
}