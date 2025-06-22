#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> a(n), b(n);
    cout << "Enter Elements in Array1:\n";
    for (int &x : a)
        cin >> x;
    cout << "Enter Elements in Array2:\n";
    for (int &x : b)
        cin >> x;

    unordered_map<int, int> freq;
    for (int x : a)
        freq[x]++;
    for (int x : b)
        freq[x]--;

    for (auto p : freq)
    {
        if (p.second != 0)
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
