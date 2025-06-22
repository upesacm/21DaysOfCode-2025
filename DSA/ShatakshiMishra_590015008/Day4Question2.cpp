#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    k = k % n;

    int rotated[n];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        cout << rotated[i] << " ";
    }
}
