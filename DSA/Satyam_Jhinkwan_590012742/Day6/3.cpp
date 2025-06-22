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
    int maxLen = 1, currLen = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            currLen++;
            maxLen = max(maxLen, currLen);
        }
        else
            currLen = 1;
    }

    cout << "Max Length: " << maxLen;
    return 0;
}