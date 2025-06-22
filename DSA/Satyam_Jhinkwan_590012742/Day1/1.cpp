#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num;
    int n, t;
    cout << "enter the size of the array: ";
    cin >> n;

    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < 0)
            t = 0;
        num.push_back(t);
    }

    cout << "Final Array elements:" << endl;

    for (int x : num)
        cout << x << " ";

    return 0;
}
