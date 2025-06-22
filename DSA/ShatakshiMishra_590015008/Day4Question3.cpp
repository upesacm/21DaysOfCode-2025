#include <iostream>
using namespace std;

int main() {
    int n, val;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> val;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(nums[i] == val)
        count++;
    }

    cout << n-count << endl;
}
