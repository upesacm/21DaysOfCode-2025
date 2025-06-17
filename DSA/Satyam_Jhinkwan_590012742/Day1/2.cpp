#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements (from 1 to " << n << "):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> freq(n + 1, 0);
    int repeated = -1, missing = -1; // -1 = none

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
            missing = i;
        else if (freq[i] == 2)
            repeated = i;
    }

    cout << "Missing: " << missing << ", Twice: " << repeated << endl;

    return 0;
}
