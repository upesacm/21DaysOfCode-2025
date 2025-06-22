#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, k, sum = 0;
    cout << "Enter the size of Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements in the array:\n";
    for (auto &x : arr)
    {
        cin >> x;
    }

    cout << "Enter the Freq of the element: ";
    cin >> k;
    unordered_map<int, int> freq;

    for (int x : arr)
        freq[x]++;

    for (auto &p : freq)
    {
        if (p.second == k)
            sum += p.first;
    }

    cout << "Sum: " << sum;
    return 0;
}