#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, actualSum = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "enter array elements (from 0 to " << n << "):" << endl;
    for (auto &x : arr)
    {
        cin >> x;
        actualSum += x;
    }
    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;
    cout << "Missing term: " << missing;
    return 0;
}
