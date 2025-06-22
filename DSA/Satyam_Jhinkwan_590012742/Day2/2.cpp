#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr)
    {
        cin >> x;
    }
    cout << "First: " << arr.front() << ", Last: " << arr.back();

    return 0;
}