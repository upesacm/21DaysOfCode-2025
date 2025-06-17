#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (n == 0) {
        cout << "Array is empty" << endl;
    } else {
        cout << "First: " << nums[0] << ", Last: " << nums[n - 1] << endl;
    }
}
