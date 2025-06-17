#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int &x : arr)
    {
        cin >> x;
        if (x % 2 == 0)
            sum += x;
    }
    cout << "Sum of the even elements in the array: " << sum;
    return 0;
}
