#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==0)
    {
        cout << "Array is empty" << endl;
        return 0;
    }

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int mini = nums[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i] < mini)
        mini = nums[i];
    }

    cout << mini << endl;
}
