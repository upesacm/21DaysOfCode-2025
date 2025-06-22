#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n + 1);
    cout << "Enter elements (1 to " << n << "):\n";
    for (auto &x : arr)
        cin >> x;

    int slow = arr[0];
    int fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << "Duplicate number: " << slow;
    return 0;
}